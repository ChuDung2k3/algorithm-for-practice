#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main()
{
	vi adj[1001];
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		cout << i << " : ";
		sort(adj[i].begin(), adj[i].end());
		for(int x : adj[i])
		{
			cout << x << " ";
		}
		cout << endl;
	}
}
