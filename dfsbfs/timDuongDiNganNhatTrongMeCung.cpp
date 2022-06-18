#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m, x, y , c, d;
int a[1001][1001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int s[1001][1001];

int bfs(int x, int y, int c, int d)
{
	queue<pair<int, int>> q;
	q.push({x, y});
	a[x][y] = 1;
	s[x][y] = 0;
	while(!q.empty())
	{
		pi tmp = q.front(); q.pop();
		for(int k = 0; k < 4; ++k)
		{
			int i1 = tmp.fi + dx[k];
			int j1 = tmp.se + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 0)
			{
				s[i1][j1] = s[tmp.fi][tmp.se] + 1;
				a[i1][j1] = 1;
				if(i1 == c && j1 == d) return s[i1][j1];
				q.push({i1, j1});
			}
		}
	}
	return -1;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}
	cin >> x >> y >> c >> d;
	cout<< bfs(x, y, c, d);
	return 0;
}

