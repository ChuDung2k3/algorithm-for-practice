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
int n, m;
int color[1001];
bool bfs(int u)
{
	queue<int> q;
	q.push(u);
	color[u] = 0;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int x : adj[v])
		{
			if(color[x] == -1)
			{
				color[x] == 1 - color[v];
			}
			else if(color[x] == color[v])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	cin >>n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms(color, -1);
	bool check = true;
	for(int i = 1; i <=n ;++i)
	{
		if(color[i] == -1)
		{
			if(!bfs(i))
			{
				check = false;
				break;
			}
		}
	}
	if(check) cout <<"YES\n";
	else cout<< "NO\n";
}
