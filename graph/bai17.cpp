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
int parent[1001];
void bfs(int u)
{
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		for(int x : adj[tmp])
		{
			if(used[x] ==false)
			{
				q.push(x);
				parent[x] = tmp;
				used[x] = true;
			}
		}
	}
}
void road(int s, int t)
{
	bfs(s);
	vi r;
	if(!used[t]) cout <<"-1\n";
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
			cout << x << " ";
		}
	}
}
int main()
{
	int n, m, s,t;
	cin >> n>> m >> s>> t;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >>y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(begin(adj[i]), end(adj[i]));
	}
	road(s, t);
	return 0;
}
