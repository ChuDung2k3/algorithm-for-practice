#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin >> n;
	
	map<ll, ll>mp;
	for(int i = 0 ; i < n; ++i)
	{
		int x; cin >> x;
		mp[x]++;
	}
	ll res = 0;
	for( auto it : mp)
	{
		if(it.se != 0)
		{
			res += it.se*(it.se - 1) / 2;
		}
	}
	cout << res << endl;
	return 0;
}

