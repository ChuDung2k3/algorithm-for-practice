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

vii edge;
vi adj[1001];
bool used[1001];
int cntlt = 0;
int n, m;
void memSet()
{
	for(int i = 0; i <= 1000; ++i)
	{
		adj[i].clear();
	}
	ms(used, false);
}
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
			if(!used[x])
			{
				q.push(x);
				used[x] = true;
			}
		}
	}
}
int dem()//dem thanh phan lien thong
{
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(used[i] == false)
		{
			++cnt;
			bfs(i);
		}
	}
	return cnt;
}
void solve()
{
	int res = 0;
	for(int i = 1; i <= m; ++i)
	{
		int cnt = 0;
		memSet();
		int canh = i;
		for(int j = 1; j <= m; ++j)
		{
			if( j != canh)
			{
				adj[edge[j - 1].fi].pb(edge[j - 1].se);// push cac canh con lai vao vetor adj
				adj[edge[j - 1].se].pb(edge[j - 1].fi);
			}
		}
		cnt = dem();
		if(cnt > cntlt) ++res;
	}
	cout <<res << "\n";
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x >> y;
		edge.pb({x,y});//luu cac canh vao vetor "edge" tu vi tri 0 -> m - 1;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	cntlt = dem(); // Dem thanh phan lien thong ban dau
	solve();
	return 0;
}
