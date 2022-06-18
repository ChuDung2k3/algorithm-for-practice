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
int cnt[1001];
void dfs(int u)
{
	used[u] = true;
	cnt[u]++;
	for(int x : adj[u])
	{
		if(used[x] == false)
		{
			dfs(x);
		}
	}
}
int main()
{
	int k, n, m;
	cin >> k >> n >> m;
	int a[k];
	for(int i = 0; i < k; ++i)
	{
		cin >> a[i];
	}
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
	}
	for(int x : a)
	{
		ms(used, false);
		dfs(x);
	}
	int dem = 0;
	for(int i = 1; i <= n;++i)
	{
		if(cnt[i] == k)++dem;
	}
	cout << dem;
	return 0;
}
