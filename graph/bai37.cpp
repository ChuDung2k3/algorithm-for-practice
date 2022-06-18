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
int res = 0;
vi adj[10001];
bool used[10001];
void dfs(int u)
{
	used[u] = true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			dfs(x);
		}
	}
}
void dinh()
{
	int cnt = 0;
	int dem = 0;
	for(int i  = 1; i <= n; ++i)
	{
		
		if(!used[i])
		{
			++cnt;
			dfs(i);
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		ms(used, false);
		dem = 0;
		used[i] = true;
		for(int j = 1; j <= n; ++j)
		{
			if(!used[j])
			{
				++dem;
				dfs(j);
			}
		}
		if(dem > cnt)
		{
			++res;
		}
	}
	cout << res << endl;
}
int main()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x  >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dinh();
}
