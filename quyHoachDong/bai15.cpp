#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int n, s;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int dp[1000001] = {0};
    cin >> n >> s;
    int c[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> c[i];
	}
	for(int i = 1; i <= s; ++i)
	{
		dp[i] = 1e9;
		for(int x : c)
		{
			if(i >= x)
				dp[i] = min(dp[i], dp[i - x] + 1);
		}
	}
	if(dp[s] == 1e9) cout <<"-1\n";
	else cout << dp[s];
	return 0;
}

