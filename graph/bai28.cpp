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
vector<vector<int>> v;
vi tmp;
vi group;
int n, m;
bool cmp(int a, int b)
{
	if(adj[a].size() == adj[b].size())
	{
		return a < b;
	}
	else return adj[a].size() > adj[b].size();
}
void dfs(int u)
{
	tmp.pb(u);
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
	cin >>n >>m;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(used[i] == 0)
		{
			tmp.clear();
			dfs(i);
			v.pb(tmp);
		}
	}
	for(int i = 0; i < v.size(); ++i)
	{
		sort(v[i].begin(), v[i].end(), cmp);
	}
	for(int i = 0; i < v.size(); ++i)
	{
		group.pb(v[i][0]);
	}
	sort(begin(group), end(group));
	for(int x : group)
	{
		cout << x << " ";
	}
	return 0;
}
