#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m;
vector<int> adj[1001];
bool used[1001];
int par[1001];
int co[1001];
void inp()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(co, 0, sizeof(co));
}

// mau do : 1;
// mau xanh: 2;

bool dfs(int u, int pa)
{
	co[u] = 3 - co[pa];
	for(int v : adj[u])
	{
		if(co[v] == 0)
		{
			if(!dfs(v, u)) return false;
		}
		else if(co[v] == color[u]) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    bool ok = true;
    for(int i = 1; i <= n; ++i)
    {
    	if(co[i] == 0)
    	{
    		if(dfs(i, 0))
    		{
    			ok = false;
			}
		}
	}
	if(ok ) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
