#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vector<ll>> vll;

int MOD = 1e9 + 7;
void nhan(vll &a, vll b, int n)
{
	ll c[n][n];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			c[i][j] = 0;
			for(int k = 0; k < n; ++k)
			{
				c[i][j] += (a[i][k] * b[k][j]) % MOD;
				c[i][j] %= MOD;
			}
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j) a[i][j] = c[i][j];
	}
}


void pow(vll a, int n, int k)
{
	vll res(n); // vector co n phan tu;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(i == j) res[i].pb(1);
			else res[i].pb(0);
		}
	}
	while(k)
	{
		if(k%2) nhan(res, a, n);
		nhan(a,a, n);
		k /= 2;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cout << res[i][j] << " ";
		}
		cout <<'\n';
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;cin >> n >> k;
    vll a(n);
    for(int i = 0; i < n; ++i)
    {
    	for(int j = 0; j < n; ++j)
    	{
    		int x; cin >> x;
    		a[i].pb(x);
		}
	}
	pow(a, n, k);
	return 0;
}

