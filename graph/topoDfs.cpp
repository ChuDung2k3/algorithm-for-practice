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
vector<int> topo;
bool used[1001];
vector<int> adj[1001];
void inp()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
	}
	memset(used, false, sizeof(used));
}

void dfs(int u)
{
	used[u] = true;
	for(int v : adj[u])
	{
		if(!used[v]) dfs(v);
	}
	topo.pb(u);
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
    		dfs(i);
		}
	}
	reverse(begin(topo), end(topo));
	for(int x : topo)
	{
		cout << x << " ";
	}
}

