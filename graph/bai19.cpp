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

bool used[1001];
vi adj[1001];

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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >>m ;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(used[i] == false)
		{
			++cnt;
			dfs(i);
		}
	}

	int res =0 ;
	for(int i = 1; i <= n;++i)
	{
		int dem = 0;
		ms(used, false);
		used[i] = true;
		for(int j = 1; j <= n;++j)
		{
			if(used[j] == false)
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
	cout << res << "\n";
	return 0;
}
