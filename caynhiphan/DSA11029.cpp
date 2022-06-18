#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

vector<int> adj[1001];
int n, pre[1001];
bool used[1001];

vector<int>leaf;
void inp()
{
	cin >> n;
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 2; i <= n; ++i)
	{
		if(adj[i].size() == 1) leaf.pb(i);
	}
}
void dfs(int x)
{
	used[x] = true;
	for(int v : adj[x])
	{
		if(!used[v])
		{
			pre[v] = x;
			dfs(v);
		}
	}
}
void path(int u, int v)
{
	vector<int> path;
	
	while(v != u)
	{
		path.pb(v);
		v = pre[v];
	}
	path.pb(1);
	reverse(path.begin(), path.end());
	for(int x : path) cout << x << " ";
	cout << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		memset(used, false, sizeof(used));
		dfs(1);
		for(int x : leaf) path(1, x);
		for(int i = 1; i <= n; ++i) adj[i].clear();
		leaf.clear();
	}
	return 0;
}
