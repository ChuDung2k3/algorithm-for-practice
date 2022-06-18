#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m, s;
int a[201][201];
int ox[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int oy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


void dfs(int i, int j)
{
	a[i][j] = 1;
	for(int k = 0; k < 8; ++k)
	{
		int i1 = i + ox[k];
		int j1 = j +oy[k];
		if(i1 >= 1 && i1 <= n  && j1 >= 1 && j1 <= m && a[i1][j1] == 0)
		{
			++s;
			dfs(i1, j1);
		}
	}
}
int main()
{
	vector<int> v;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if(a[i][j] == 0)
			{
				s = 1;
				dfs(i, j);
				v.pb(s);
			}
		}
	}
	sort(begin(v), end(v));
	cout << v.size() << "\n";
	for(int x : v)
	{
		cout << x << " ";
	}
	return 0;
}

