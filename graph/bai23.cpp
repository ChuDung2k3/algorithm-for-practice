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
vi adj[1001];
bool used[1001];

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
	int n, m;
	cin >> n >>m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n ; ++i)
	{
		ms(used, false);
		dfs(i);
		for(int j = 1; j <= n; ++j)
		{
			if(used[j] == false)
			{
				cout <<"0\n";
				return 0;
			}
		}
	}
	cout <<"1\n";
	return 0;
}
