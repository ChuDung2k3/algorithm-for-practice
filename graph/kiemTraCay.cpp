#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 1001;
int n, m;
vi adj[maxn];
bool used[maxn];

void inp()
{
	cin >> n >> m;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(used, false, sizeof(used));
}

bool dfs(int u, int par)
{
	used[u] = true;
	for(int v : adj[u])
	{
		if(!used[v])
		{
			if(dfs(v, u)) return true;
		}
		else if(v != par) return true;
	}
	return false; // Khong co chu trinh
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
    if(dfs(1, -1))
    {
    	cout << "0\n";
	}
	else
	{
		for(int i = 1; i <= n; ++i)
		{
			if(!used[i])
			{
				cout << 0 <<"\n";
				return 0;
			}
		}
		cout << 1 << endl;
	}
}

