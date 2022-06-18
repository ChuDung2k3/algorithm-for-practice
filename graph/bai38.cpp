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
int n, m;
bool used[1001];
int gian[1001];

int ans = 0;
void dfs(int u, int dem)
{
	used[u] = true;
	if(dem > m) return;
	if(adj[u].size() == 1 && u != 1) ++ans;
	for(int v : adj[u])
	{
		if(!used[v])
		{
			if(gian[v] == 1) dfs(v, dem + 1);
			else dfs(v,  0);
		}
	}
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) cin >> gian[i];
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs(1, gian[1]);
	cout << ans << endl;
	return 0;
}
