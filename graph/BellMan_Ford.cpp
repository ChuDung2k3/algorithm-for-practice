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
struct edge
{
	int x, y, w;
};
vector<edge> dscanh;
int d[100001];
void nhap()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		dscanh.pb({x, y, w});
	}
}
void BellMan_Ford(int s)
{
	for(int i = 1; i <= n; ++i) d[i] = 1e9;
	d[s] = 0;
	for(int i = 0; i < n- 1; ++i)
	{
		for(int j= 0;j < m; ++j)
		{
			edge tmp = dscanh[j];
			int x = tmp.x, y =tmp.y,  w = tmp.w;
			if(d[x] < 1e9)
			{
				d[y] = min(d[y], d[x] + w);
			}
		}
		for(int i = 1; i <= n; ++i)
		{
			cout << d[i] <<' ';
		}
	}
}
int main()
{
	nhap();
	BellMan_Ford(1);
}
