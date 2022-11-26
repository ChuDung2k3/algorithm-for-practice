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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; ++i)
    	cin >> a[i];
    int dp[1000001] = {0};
    dp[0] = 1;
	for(int c : a)
    {
    	for(int i = 1; i <= s; ++i)
    	{
    		if(i >= c)
    		{
    			dp[i] = (dp[i] + dp[i - c]) % MOD;
			}
		}
	}
	cout << dp[s] << endl;;
}

