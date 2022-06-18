#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m;
vector<int> adj[1001];
bool used[1001];
int in[1001];
vector<int> topo;
void inp()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		in[y]++;
	}
	memset(used, false, sizeof(used));
}

void kahn()
{
	queue<int> q;
	for(int i = 1; i <= n; ++i)
	{
		if(in[i] == 0)
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(int v: adj[u])
		{
			in[v]--;
			if(in[v] == 0) q.push(v);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    kahn();
    return 0;
}

