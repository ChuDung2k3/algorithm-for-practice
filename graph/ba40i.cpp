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

bool used[1001];
vi adj[1001];
int n, m, k;

void bfs(int u)
{
	queue<int> q;
	used[u] = true;
	q.push(u);
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		for(int x : adj[tmp])
		{
			if(used[x] == 0)
			{
				used[x] = true;
				cout << tmp << "->" << x << endl;
				q.push(x);
			}
		}
	}
}
int main()
{
	cin >> n >> m >> k;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(adj[i].begin(), adj[i].end());
	}
	bfs(k);
	return 0;
}
