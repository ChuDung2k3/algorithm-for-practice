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

ll powmod(ll a, ll b)
{
	if(b == 0) return 1;
	ll x = powmod(a, b / 2);
	if(b % 2 == 0) return (x %MOD * x % MOD) % MOD;
	else return a *(x %MOD * x % MOD) % MOD;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << powmod(2, n - 1) <<'\n';
    return 0;
}

