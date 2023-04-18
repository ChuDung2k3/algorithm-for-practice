#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    ll dp[n + 1][m + 1] = {0};
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		cin >> dp[i][j];
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if(i == 1) dp[i][j] += dp[i][j - 1];
			else if( j == 1) dp[i][j] += dp[i - 1][j];
			else
			{
				dp[i][j] += max({dp[i -1][j], dp[i][j - 1]});
			}
		}
	}
	cout << dp[n][m];
}

