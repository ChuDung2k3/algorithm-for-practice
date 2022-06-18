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

const int maxn = 1001;
vi adj[1001];
vi con[1001];
int child[maxn];  
int n, m;
int cnt = 0;
int dfs(int u, int par)
{
	int cnt = 1;
	for(int v : adj[u])
	{
		if(v != par)
		{

			cnt += dfs(v, u);
		}
	}
	child[u] = cnt;

	return cnt;
}
int main()
{
	cin >> n;
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs(1, -1);
	int ans = 0;
	for(int i = 1; i <= n; ++i)
	{
		ans += child[i];
	}
	cout << ans << endl;
	return 0;
}
