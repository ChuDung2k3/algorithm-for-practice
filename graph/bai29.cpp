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

int a[1001][1001];
vi adj[1001];
int d[1001][1001];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n;
void bfs(int i, int j, int u, int v)
{
	queue<pair<int, int>> q;
	q.push({i,j});
	a[i][j] = 0;
	d[i][j] = 0;
	while(!q.empty())
	{
		pi tmp = q.front();
		q.pop();
		for(int k = 0; k < 8; ++k)
		{
			int i1 = tmp.fi + dx[k];
			int j1 = tmp.se + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
			{
				d[i1][j1] = d[tmp.fi][tmp.se] + 1;
				if(i1 == u && j1 == v) return;
				q.push({i1, j1});
				a[i1][j1] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	
	cin.tie(0);
	
	cin >> n;
	int s, t, u, v;
	cin >> s >> t >> u >> v;
	for(int i = 1; i <= n; ++i)
	{
		for(int j =1; j <= n; ++j)
		{
			cin >> a[i][j];
		}
	}
	bfs(s, t, u, v);
	if(d[u][v] != 0) cout << d[u][v];
	else cout << "-1\n";
	
	return 0;
}
