#include<bits/stdc++.h>
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
int parent[1001];
void dfs(int u)
{
	used[u] = true;
	for(int v : adj[u])
	{
		if(!used[v])
		{
			parent[v] = u;
			dfs(v);
		}
	}
}
void path(int s, int t)
{
	dfs(s);
	if(!used[t])
	{
		cout << "-1\n";
	}
	else
	{
		vi road;
		while(t != s)
		{
			road.pb(t);
			t = parent[t];
		}
		road.pb(s);
		reverse(begin(road), end(road));
		for(int x : road)
		{
			cout << x << " ";
		}
	}
}
int main()
{
	int n, m,s, t;
	cin >>n >> m >> s >> t;
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x>> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(begin(adj[i]), end(adj[i]));
	}
	path(s, t);
	return 0;
}
