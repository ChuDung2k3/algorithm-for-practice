#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

ll n, x, y, a[1005][1005], d, gt, hang, cot, s, t,u, v;
ll p[1005][1005];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
bool used[1005][1005];
int gcd(ll a, ll b)
{
	if(b == 0) return a;
	else return gcd(b, a % b);
}
void init()
{
	d = 1;
	gt = 1; hang = n; cot = n;
	while(d <= n * n)
	{
		for(int i = d; i <= cot ; ++i) a[d][i] = gt++;
		for(int i = d + 1; i <= hang; ++i) a[i][cot] = gt++;
		for(int i = cot - 1; i >= d; --i) a[hang][i] = gt++;
		for(int i = hang - 1; i > d; --i) a[i][d] = gt++;
		++d; hang--; cot--;
	}
}

int bfs(int i, int j, int u, int v)
{
	queue<pair<int, int>> q;
	p[i][j] = 0;
	used[i][j] = true;
	q.push({i, j});
	while(!q.empty())
	{
		pi top = q.front(); q.pop();
		if(top.fi == u && top.se == v) return p[top.fi][top.se];
		for(int k = 0; k < 4; ++k)
		{
			int i1 = top.fi + dx[k];
			int j1 = top.se + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && used[i1][j1] == false && __gcd(a[i1][j1], a[top.fi][top.se]) == 1)
			{
				//cout << a[i1][j1] << " ";
				// Qua gioi han mang used vi a[i][j] --> 10^6;
				used[i1][j1] = true;
				p[i1][j1] = p[top.fi][top.se] + 1;
				
				q.push({i1, j1});
			}
		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int tmp; cin >> tmp;
	
	while(tmp--)
	{
		
		cin >> n >> x >> y;
		init();// tao matran xoan oc
		for(int i = 1; i <= n; ++i) // tim vi tri cua 2 diem
		{
			for(int j = 1; j <= n; ++j)
			{
				used[i][j] = false;
				p[i][j] = 0;
				if(a[i][j] == x)
				{
					s = i; t = j;
				}
				if(a[i][j] == y)
				{
					u = i; v = j;
				}
			}
		}
		//cout << s << " " << t << " " << u << " " << v << " " << gcd(18, 19);
//	for(int i = 1; i <= n; ++i)
//	{
//		for(int j = 1; j <= n; ++j)
//		{
//			cout << a[i][j] << " ";	
//		}
//		cout << "\n";
//	}
		cout << bfs(s, t, u , v) <<"\n";
		
	}
	return 0;
}

