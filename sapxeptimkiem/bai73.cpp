#include<bits/stdc++.h>
using ll = long long;
using namespace std;

bool bs(int a[],int t, ll m, int n)
{
	ll ans = 0;
	for(int i = 0;i < n; ++i)
	{
		ans += m/a[i];
	}
	return ans >= t;
}
int main()
{
	int n, t;
	cin >> n >>t;
	int a[n];
	for(int &x:a) cin >>x;
	ll r = 1e18, l = 0;
	int res = -1;
	while(l <= r)
	{
		ll m = (l + r)/2;
		if(bs(a, t, m, n))
		{
			r = m - 1;
			res = m;
		}
		else l = m + 1;
	}
	cout << res << endl;
	return 0;
}
