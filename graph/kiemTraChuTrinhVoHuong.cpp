
// Chu trinh trong do thif
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

void inp()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(used, false, sizeof(used));
}

bool dfs(int u)
{
	used[u] = true;
	for(int v : adj[u])
	{
		if(!used[v])
		{
			par[v] = u;
			if(dfs(v)) return true;
		}
		else if(v != par[u]) return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    for(int i = 1; i <= n; ++i)
    {
    	if(!used[i])
    	{
    		if(dfs(i))
    		{
    			cout << "1\n";
    			return 0;
			}
		}
	}
	cout << "0\n";
	return 0;
}

