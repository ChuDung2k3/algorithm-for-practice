#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		int cnt = 0, tmp; 
		for(int x : a )
		{
			if(x <= k) ++cnt;
		}
		int dem = 0;
		for(int i = 0; i < cnt; ++i)
		{
			if(a[i] <= k) ++dem;
		}
		int res = dem;
		for(int i = 1; i <= n - cnt; ++i)
		{
			if(a[i -1] <= k) --dem;
			if(a[i + cnt - 1] <= k) ++dem;
			res = max(dem,res);
		}
		cout << cnt -res << endl;
	}
	return 0;
}
