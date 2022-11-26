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
int dp[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; ++i)
    	cin >> a[i];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= s; ++i)
    {
    	for(int x : a)
    	{
    		if(i >= x)
    		{
    			dp[i] = (dp[i] + dp[i - x] ) % MOD;
			}
		}
	}
	cout <<dp[s] << endl;
	return 0;
}

