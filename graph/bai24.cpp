#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vi adj[1001];
int cnt = 0;
bool used[1001];
void dfs(int u)
{
	++cnt;
	used[u] = true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			dfs(x);
		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1;i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	if(n -1 != m) cout << "0\n";
	else
	{
		dfs(1);
	
		if(cnt == n)
		{
			cout << "1\n";
		}
		else cout <<"0\n";
	}
	return 0;
}
