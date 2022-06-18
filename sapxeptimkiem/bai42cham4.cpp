#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n];
		map<ll, bool>mp;
		for(ll &x : a)
		{
			cin >> x;
			mp[x] = true;
		}
		for(int i = 0; i < n ;++i)
		{
			if(mp[i])
				cout <<i << " ";
			else cout <<"-1 ";
		}
		mp.clear();
		cout << endl;
	}
		return 0;
}
