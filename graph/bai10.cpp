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
bool visited[1001];

void dfs(int u)
{
	cout << u<< " ";
	visited[u] = true;
	for(int x : adj[u])
	{
		if( visited[x] == false)
		{
			visited[x] = true;
			dfs(x);
		}
	}
}
int main()
{
	int n, m, s;
	cin >> n >> m >> s;
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin>> x>> y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(s);
	return 0;
}
