#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int dp[1005][1005];
//dp[i][j] = max(dp[i - 1][j], dp[i][j - 1];
// dp[i][j] = max(dp[i][j], dp[i-1][j - 1] + 1)
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		if(s[i - 1] == t[j - 1])
    		{
    			dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
    cout << dp[n][m] << '\n';
    return 0;
}

