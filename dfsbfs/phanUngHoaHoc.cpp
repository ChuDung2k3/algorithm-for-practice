#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vi adj[100];
bool used[100];
ll res = 1, mx = 1;
void dfs(int u)
{
	used[u] = true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			res *= 2;
			used[x] = true;
			dfs(x);
			 
		}
	}
	mx = max(res, mx);
}
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(used[i] == false)
		{
			dfs(i);

		}
	}
	cout << mx << endl;
	return 0;
}

