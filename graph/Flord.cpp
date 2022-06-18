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

int n, m;
int d[101][101];

void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			if(i == j) d[i][j] = 0;
			else d[i][j] = 1e9;
		}
	}
	for(int i = 0;i < m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		d[x][y] = d[y][x] = w;
	}
	for(int k = 1; k < n + 1; ++k)
	{
		for(int i = 1; i < n + 1; ++i)
		{
			for(int j = 1; j < n + 1; ++j)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	int q; cin >> q;
	while(q--)
	{
		int x, y;
		cin >> x >> y;
		cout << d[x][y] << "\n";
	}
}
int main()
{
	inp();
}
