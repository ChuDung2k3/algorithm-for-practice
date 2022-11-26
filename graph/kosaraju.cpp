#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

/*
B1: DFS tren do thi ban dau
B2: Lat nguoc do thi ban dau
B3: In tplt, dfs tren Transpose graph
*/
const int maxn = 1e5 + 1;
int n, m;
vector<int> adj[maxn];
bool used[maxn];
int h[maxn];
void inp()
{
	cin >> n;
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
void dfs(int u, int par)
{
	h[u] = h[par] + 1;
	used[u] = true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			dfs(x, u);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    h[0] = -1;
    dfs(1, 0);
    for(int i = 1; i <= n; ++i)
    {
    	cout << h[i] << " ";
	}
    return 0;
}

