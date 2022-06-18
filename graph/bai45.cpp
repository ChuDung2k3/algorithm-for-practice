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

int n, m;
vii adj[maxn];
int d[1001][1001];

void Bellman()
{
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			if(i == j) d[i][j] = 0;
			else if(!d[i][j]) d[i][j] = 1e9; 
		}
	}
	for(int k = 1; k <= n; ++k)
	{
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= n;++j)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x, y;
		cin >> x >> y;
		cout << d[x][y] << "\n";
	}
}
int main()
{
	cin >>n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		d[x][y] = d[y][x] = w;
	}
	Bellman();
	return 0;
}
