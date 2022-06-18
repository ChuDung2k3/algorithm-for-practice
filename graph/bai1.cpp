#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
vector<int> adj[1001];
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}
	for(int i = 1; i <= n; ++i)
	{
		cout << i << " : ";
		sort(adj[i].begin(), adj[i].end());
		for(int it : adj[i])
		{
			cout << it << " ";
		}
		cout << endl;
	}
}
