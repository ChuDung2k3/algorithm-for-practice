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
ll bipow(ll a, ll b)
{
	if(b == 0) return 1;
	ll x = bipow(a, b / 2);
	if(b % 2 == 0) return x * x;
	else return x * x * a;
}

ll bipow2(ll a, ll b){
	ll res = 1;
	while(b)
	{
		if(b%2)
		{
			res *= a;
			res %= MOD;
		}
		a*= a;
		a %= MOD;
		b/=2;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    cout << bipow2(n, k);
}

