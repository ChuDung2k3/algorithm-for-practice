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
    int c, n;
    cin >> c >> n;
    int w[n];
    for(int i = 0; i < n; ++i) cin >> w[i];
    int dp[c + 1] = {0};
    dp[0] = 1;
    for(int i = 0; i < n; ++i)
    {
    	for(int j = c; j >= w[i]; --j)
    		if(dp[j - w[i]]) dp[j] = 1;
	}
	for(int i = c; i >= 0; --i)
	{
		if(dp[i])
		{
			cout << i <<"\n";
			break;
		}
	}
	return 0;
}

