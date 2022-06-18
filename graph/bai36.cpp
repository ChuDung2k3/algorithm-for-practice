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
int height[1001];
int cnt = 0;
void dfs(int u)
{
	used[u]= true;
	
	height[u] = cnt;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			++cnt;
			dfs(x);
			--cnt;
		}
	}
}
int main()
{
	int n;
	cin >>n;
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	height[1] = 0;
	dfs(1);
	for(int i = 1; i <= n; ++i)
	{
		cout << height[i] << " ";
	}
	return 0;
}
