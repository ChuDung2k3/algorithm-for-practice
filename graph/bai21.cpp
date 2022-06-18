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
int parent[1001];
bool bfs(int u)
{
	queue<int> q;
	used[u] = true;
	q.push(u);
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		for(int x : adj[tmp])
		{
			if(!used[x])
			{
				used[x] = true;
				q.push(x);
				parent[x] = tmp;
			}
			else if(x != parent[tmp]) return true;
		}
	}
	return false;
}
int main()
{
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	int n, m; cin >> n >> m;
	for(int i =1; i <=m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <=n; ++i)
	{
		if(!used[i])
		{
			if(bfs(i))
			{
				cout << "1\n";
				return 0;
			}
		}
	}
	cout << "0\n";
	return 0;
}
