#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<int, int> a, b;
	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		a[x]++;
	}
	for(int i = 0; i < m; ++i)
	{
		int x; cin >> x;
		b[x]++;
	}
	int res = 0;
	for(auto it : a)
	{
		if(b.count(it.fi))
		{
			res += min(it.se, b[it.fi]);
		}
	}
	cout << res << endl;
}

