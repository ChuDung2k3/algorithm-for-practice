#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 1001;

int n, m;
int a[501][501];
int d[100][100];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
void dijkstra()
{
	d[1][1] = a[1][1];
	priority_queue<pair<int, pi>, vector<pair<int, pi>>, greater<pair<int, pi>>> q;
	q.push({d[1][1], mp(1,1)});
	while(!q.empty())
	{
		pair<int, pi> top = q.top(); q.pop();
		int len = top.fi;
		pi u = top.second;
		if(len > d[u.fi][u.se]) continue;
		for(int k = 0; k < 4; ++k)
		{
			int i1 = u.fi + dx[k];
			int j1 = u.se + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m)
			{
				if(d[i1][j1] > d[u.fi][u.se] + a[i1][j1])
				{
					d[i1][j1] = d[u.fi][u.se] + a[i1][j1];
					q.push({d[i1][j1], mp(i1, j1)});
				}
			}
		}
	}
	cout << d[n][m] << endl;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
			d[i][j] = 1e9;
		}
	}
	dijkstra();
	return 0;
}
