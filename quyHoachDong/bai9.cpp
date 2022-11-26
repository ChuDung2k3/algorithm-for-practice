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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int dp[1001][1001];
    for(int i = 1; i<= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		if(a[i - 1] != b[j - 1])
    			dp[i][j] = max(dp[i][j - 1] , dp[i - 1][j]);
    		else
    			dp[i][j] = dp[i - 1][j - 1] + 1;
		}
	}
	cout << dp[n][m] <<'\n';
	return 0;
}

