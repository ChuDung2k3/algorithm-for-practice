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
bool bfs(int u)
{
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x :  adj[v])
		{
			if(!used[x])
			{
				q.push(x);
				used[x] = true;
				par[x] = v;
			}
			else if(x != par[v]) return true;
		}
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    bool ok =false;
    for(int i = 1; i <= n; ++i)
    {
    	if(!used[i] && bfs(i))
    	{
    		ok = true;
    		break;
		}
	}
    cout << ok <<"\n";
    return 0;
}

