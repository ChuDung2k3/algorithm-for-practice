#include<bits/stdc++.h>
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
void dfs(int u)
{
	used[u] =true;
	for(int x : adj[u])
	{
		if(used[x] == false)
		{
			used[x] = true;
			dfs(x);
		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i =1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int cnt = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(used[i]== false)
			{
				++cnt;
				dfs(i);
			}
		}
	cout << cnt << endl;
}
