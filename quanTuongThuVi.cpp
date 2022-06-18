#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = 1e9;

int main()
{
    ll n; cin >> n;
    map < ll, ll > mp1, mp2;
    while(n--)
    {
    	ll x, y; cin >> x >> y;
    	
    	mp1[x - y + 1000] ++;
    	
    	mp2[x + y - 1]++;
	}
	ll res = 0;
	for(auto x : mp1)
	{
		res += (x.second * (x.second - 1)) / 2;
		
	}
	for(auto x : mp2)
	{
		res += (x.second * (x.second - 1)) / 2;
		
	}
	cout << res << "\n";
	
	return 0;
}
