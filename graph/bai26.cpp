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
int n, m;
vi tmp;
vector<vector<int>> tplt;
int cnt = 0;
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
void solve()
{
	for(int i = 1; i <= n; ++i)
	{
		if(!used[i])
		{
			++cnt;
			tmp.clear();
			dfs(i);
			tplt.pb(tmp);
		}
	}
	vi dinh;
	for(int i = 0; i < tplt.size(); ++i)
	{
		sort(tplt[i].begin(), end(tplt[i]));
		dinh.pb(tplt[i][0]);
	}
	cout << cnt - 1 << endl;
	for(int i = 0; i < dinh.size() - 1; ++i)
	{
		cout << dinh[i] << " " << dinh[i + 1] << endl;
	}
}
int main()
{
	cin >>n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	solve();
	return 0;
}
