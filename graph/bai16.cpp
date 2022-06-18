#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int parent[1001];
vi adj[1001];
bool used[1001];
void dfs(int u)
{
	used[u] =true;
	for(int x : adj[u])
	{
		if(!used[x])
		{
			parent[x] = u;
			used[x] = true;
			dfs(x);
		}
	}
}
void road(int s, int t)
{
	dfs(s);
	vector<int> r;
	if(used[t] == false) 
	{
		cout <<"-1\n";
	}
	else
	{
		while(t != s)
		{
			r.pb(t);
			t = parent[t];
		}
		r.pb(s);
		reverse(begin(r), end(r));
		for(int x : r)
		{
			cout << x <<" ";
		}
	}
}
int main()
{
	int n, m, s, t;
	
	cin >>n >> m >> s >> t;
	
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(begin(adj[i]), end(adj[i]));
	}
	road(s, t);
	return 0;
}
