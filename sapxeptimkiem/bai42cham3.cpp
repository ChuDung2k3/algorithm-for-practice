#include<bits/stdc++.h>

using ll = long long;
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n], cnt = 0;;
		for(ll &x : a) 
		{
			cin >> x;
			if(x == 0) ++cnt;
		}
		for(int x : a)
		{
			if(x) cout << x<< " "; 
		}
		for(int i = 1; i <= cnt; ++i)
		{
			cout <<"0 ";
		}
		cout << endl;
	}
	return 0;
}
