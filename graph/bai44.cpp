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
const int maxn = 1001;
int m , n, s;
vii adj[1001];
int d[maxn];
void Dijkstra( int s)
{
	for(int i = 1; i <= n; ++i) d[i] = 1e9;
	d[s] = 0;
	priority_queue<pi, vector<pi>, greater<pi>> q;
	q.push({0, s});
	while(!q.empty())
	{
		pi top = q.top(); q.pop();
		int u = top.se;
		int len = top.fi;
		if(len > d[u]) continue;
		for(pi it: adj[u])
		{
			int v = it.fi;
			int w = it.se;
			if(d[v] > d[u] + w)
			{
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	for(int i = 1; i <= n; ++i) cout << d[i] << ' ';
}
int main()
{
	cin >> n >> m >> s;
	for(int i = 0; i < m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}
	Dijkstra(s);
	return 0;
}

