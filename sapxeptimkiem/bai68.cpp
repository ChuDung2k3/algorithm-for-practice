#include<bits/stdc++.h>

using ll = long long;
using namespace std;

bool check(int a[], int n, int k, ll s)
{
	ll sum = 0, cnt = 0;
	for(int i = 0; i < n;++i)
	{
		if(a[i] > s) return false;
		else
		{
			sum += a[i];
			if(sum > s)
			{
				++cnt;
				sum = a[i];
			}
			if(cnt > k) return false;
		}
	}
	++cnt;
	return cnt <= k;
}
int main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	ll l = *max_element(a, a + n);
	ll r = accumulate(a, a + n, 0ll);
	ll res = -1;
	while(l <= r)
	{
		ll m = (l + r)/2;
		if(check(a,n, k, m))
		{
			res = m;
			r = m - 1;
		}
		else l = m + 1;
	}
	cout << res << endl;
	return 0;
}
