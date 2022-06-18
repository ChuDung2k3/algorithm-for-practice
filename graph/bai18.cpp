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
int used[1001];
int parent[1001];
int cnt[1001], ans = 0;
void dfs(int u)
{
	used[u] = ans;
	for(int x : adj[u])
	{
		if(used[x] == 0)
		{
			used[x] = ans;
			dfs(x); 
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x,y; cin >> x>> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(used[i] == 0)
		{
			++ans;
			dfs(i);
		}
	}
	int t; cin >> t;
	while(t--)
	{
		int s, t;
		cin >> s>> t;
		if(used[s] != used[t]) cout << "-1\n";
		else cout << "1\n";
	}
	return 0;
}
