#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vi v[10001];
bool used[10001];
void dfs(int u)
{
	cout << u <<" ";
	used[u] = true;
	for(int x : v[u])
	{
		if(!used[x])
		{
			used[x] = true;
			dfs(x);
		}
	}
}
int main()
{
	int n, m, s;
	cin >>n >> m >> s;
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	for(int i = 1; i <= n;++i)
	{
		sort(v[i].begin(), v[i].end());
	}
	dfs(s);
	return 0;
}
