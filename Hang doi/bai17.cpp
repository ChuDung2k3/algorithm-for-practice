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
int n, m;
int a[1001][1001];
int used[1001][1001];
int d[1001][1001];
int bfs(int u, int v)
{
	d[u][v] = 0;
	queue<pi> q;
	q.push({u, v});
	while(!q.empty())
	{
		pi tmp = q.front(); q.pop();
		int i = tmp.fi, j = tmp.se;
		if(i == n && j == m) return d[i][j];
		if(i + a[i][j] <= n && !used[i + a[i][j]][j])
		{
			q.push({i + a[i][j], j});
			d[i + a[i][j]][j] = d[i][j] + 1;
			used[i+a[i][j]][j] = true;
		}
		if(j + a[i][j] <= m && !used[i][j + a[i][j]])
		{
			q.push({i, j + a[i][j]});
			d[i][j + a[i][j]] = d[i][j] + 1;
			used[i][j + a[i][j]] = true;
		}
	}
	return -1;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ms(used, false);
		ms(d, 0);
		ms(a, 0);
		cin >> n >> m;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= m; ++j)
			{
				cin >> a[i][j];
			}
		}
		cout << bfs(1, 1) << endl;
		
	}
	return 0;
}
