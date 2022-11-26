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
    char a[n + 1][n + 1];
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= n; ++j)
    		cin >> a[i][j];
	}
	
	int dp[n + 1][n + 1] = {0};
	int mod = 1e9 + 7;
	dp[1][0] = dp[0][1] = 1;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			if(a[i][j] =='.')
			{
				if(i == 1) dp[i][j] = dp[i][j - 1];
				else if(j == 1)dp[i][j] = dp[i - 1][j];
				else
				{
					dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) %mod;
				}
			}
			else dp[i][j] = 0;
		}
	}
	cout << dp[n][n] << endl;
	return 0;
}

