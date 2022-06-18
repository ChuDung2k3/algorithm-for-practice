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

int n;
int a[1001][1001];
int d[1001][1001];
int dx[8] = {-1,-2, -2, -1, 1, 2 , 2 , 1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
void bfs(int s, int t, int u, int v)
{
	queue<pi> q;
	q.push({s, t});
	a[s][t] = 0;
	d[s][t] = 0;
	while(!q.empty())
	{
		pi tmp = q.front();
		q.pop();
		for(int k = 0; k < 8; ++k)
		{
			int s1 = tmp.fi + dx[k];
			int t1 = tmp.se + dy[k];
			if(s1 >= 1 && s1 <= n && t1 >= 1 && t1 <= n && a[s1][t1])
			{
				d[s1][t1] = d[tmp.fi][tmp.se] + 1; 
				if(s1 == u && t1 == v) return;
				a[s1][t1] = 0;
				q.push({s1, t1});
			}
		}
	}
}
int main()
{
	cin >> n;
	int s, t, u, v;
	cin >> s>> t>> u >> v;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> a[i][j];
		}
	}
	bfs(s, t, u, v);
	if(d[u][v]) cout << d[u][v];
	else cout <<"-1\n";
	return 0;
}
