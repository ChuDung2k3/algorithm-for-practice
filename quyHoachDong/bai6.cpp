#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int dp[n + 1] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= min (i, 3); ++j)
    	{
    		dp[i] = (dp[i] + dp[i - j]);
		}
	}
	cout << dp[n] <<'\n';
	return 0;
}

