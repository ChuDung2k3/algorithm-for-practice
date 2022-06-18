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
queue<int> q;
void bfs(int u)
{
	used[u] = true;
	q.push(u);
	while(!q.empty())
	{
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
		for(int x : adj[tmp])
		{
			if(!used[x])
			{
			q.push(x);
			used[x] = true;
			}
		}
	}
}
int main()
{
	int n, m, s;
	cin >> n >> m >> s;
	for(int i = 1; i <= m;++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(adj[i].begin(), end(adj[i]));
	}
	bfs(s);
	return 0;
}
