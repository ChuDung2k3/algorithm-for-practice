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
bool used[1001];
int cnt = 0;

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
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int tmp = 0;
	for(int i= 1; i <= n; ++i)
	{
		cnt = 0;
		if(used[i] == false)
		{
			dfs(i);
			tmp = max(tmp, cnt);
		}
	}
	cout << tmp << endl;
	return 0;
}
