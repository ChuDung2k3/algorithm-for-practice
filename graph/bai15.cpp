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
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		for(int x : adj[tmp])
		{
			if(used[x] == false)
			{
				q.push(x);
				used[x] = true;
				parent[x] = tmp;
			}
		}
	}
}
void road(int s, int t)
{
	bfs(s);
	if(used[t] == false)
	{
		cout<< "-1\n";
	}
	else
	{
		vi r;
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
	int n, m, s, t;
	cin >> n >> m >> s>> t;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x>> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(begin(adj[i]), end(adj[i]));
	}
	road(s, t);
	return 0;
	
}
