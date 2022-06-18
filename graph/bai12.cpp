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
	q.push(u);
	used[u] = true;
	while(!q.empty())
	{
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
		for(int x : adj[tmp])
		{
			if(used[x] == false)
			{
				used[x] = true;
				q.push(x);
			}
		}
	}
}
int main()
{
	int n, m, s;
	cin >> n >>m >> s;
	
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(begin(adj[i]), end(adj[i]));
	}
	bfs(s);
	return 0;
}
