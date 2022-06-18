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
	vii v;
	vi adj[1001];
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> a[i][j];
			if(a[i][j])
			{
				v.pb({i, j});
				adj[i].pb(j);
			}
		}
	}
	for(auto it : v)
	{
		cout << it.fi << " " << it.se << endl;
	}

	cout << endl;
	for(int i = 1; i <= n; ++i)
	{
		cout << i << " : ";
		for(int x : adj[i])
		{
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
