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
    int n, s;
	cin >> n >> s;
    int w[n + 1], v[n + 1];
	for(int i = 1; i <= n; ++i) cin >> w[i];
	for(int i = 1;i <= n; ++i) cin >> v[i];
	int dp[1001][1001];
	for(int i = 0; i <= n; ++i)
	{
		for(int j = 0; j <= s; ++j)
		{
			if(i == 0 || j == 0) dp[i][j] = 0;
			else
			{
				dp[i][j] = dp[i - 1][j];
				if(w[i] <= j)
					dp[i][j] = max(dp[i][j], v[i] + dp[i- 1][j - w[i]]);
			}
		}
		
	}
	cout << dp[n][s];
	return 0;
}

