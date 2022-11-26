#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

struct pro
{
	int f, s, w;	
};
int bs(pro a[], int n)
{
	int l = 0, r = n - 1, res = -1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m].s < a[n].f)
		{
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>> n;
    pro a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i].f >> a[i].s >> a[i].w;
	}
	sort(a, a + n, [](pro a, pro b) -> bool{
		return a.s < b.s;
	});
	ll ans[n];
	ans[0] = a[0].w;
	for(int i = 1; i < n; ++i)
	{
		ll res = a[i].w;
		int l = bs(a, i);
		if(l != -1)
		{
			res += ans[l];
		}
		ans[i] = max(res, ans[i - 1]);
	}
	cout << ans[n - 1];
	return 0;
}

