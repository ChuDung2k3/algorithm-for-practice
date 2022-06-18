#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first 
#define se second
#define ms(s, n) memset(s, n, sizeof(s))
using namespace std;

vector<int> adj[100001];
int d[100001];
bool used[100001];
int n;
void inp()
{
	cin >> n;
	for(int i = 0; i < n - 1; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms(used, false);
	ms(d, 0);
}
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	d[u] = 0;
	used[u] = true;
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x : adj[v])
		{
			if(!used[x])
			{
				used[x] = true;
				d[x] = d[v] + 1;
				q.push(x);
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		bfs(1);
		cout << *max_element(d + 1, d + n + 1) << endl;
		for(int i = 0; i < n; ++i) adj[i].clear();
	}
}
