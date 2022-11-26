#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = 1e9 + 7;
ll dao(ll a)
{
	ll res = 0;
	while(a)
	{
		ll tmp = a % 10;
		res = res*10 + tmp;
		a/= 10;
	}
	return res;
}
ll bipow(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b%2)
		{
			res *= a;
			res %= MOD;
		}
		a *= a;
		a%= MOD;
		b/= 2;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << bipow(n, dao(n));
}

