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
vector<vector<int>> v;
vi tmp;
int n, m;
bool used[1001];
void dfs(int u)
{
	tmp.pb(u);
	used[u]= true;
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
	cin >> n >> m;
	for(int i = 0 ;i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		tmp.clear();
		if(!used[i])
		{
			dfs(i);
			v.pb(tmp);
		}
	}
	for(int i = 0; i < v.size(); ++i)
	{
		for(int x : v[i])
		{
			if(adj[x].size() != v[i].size() - 1)
			{
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}
