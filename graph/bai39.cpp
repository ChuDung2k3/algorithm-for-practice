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

int n, m, s;
vi adj[1001];
bool used[1001];
int parent[1001];
void dfs(int u)
{
	used[u] = true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			cout << u << "->" << x <<endl;
			dfs(x);
		}
	}
}
int main()
{
	cin >> n >>m >> s;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 0; i <= n; ++i)
	{
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(s);
	return 0;
}
