#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vi adj[1001];
bool used[1001];
int co[1001];

bool dfs(int u)
{
	co[u] = 1;
	for(int x : adj[u])
	{
		if(!co[x])
		{
			if(dfs(x)) return true;
		}
		else if(co[x] == 1) return true;
	}
	co[u] = 2;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
    	int x,y;
    	cin >> x >> y;
    	adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(!co[i])
		{
			if(dfs(i))
			{
				cout << "1\n";
				return 0;
			}
		}
	}
	cout << "0\n";
	return 0;
}

