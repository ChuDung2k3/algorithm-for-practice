#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

//dp[i] = 1;
//if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1)
int n;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[n];
    for(int i = 0; i < n; ++i)
    {
    	dp[i] = 1;
    	for(int j = 0; j < i; ++j)
    	{
    		if(a[i] > a[j])
    		{
    			dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	cout << n - *max_element(dp, dp + n) << '\n';
	return 0;
}

