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
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int dp[n + 1] = {0};
    for(int i = 1; i <= n; ++i)
    {
    	dp[i] = a[i];
    	for(int j = 1; j < i; ++j)
    	{
    		if(a[j] < a[i])
    			dp[i] = max(dp[i], dp[j] + a[i]);
		}
	}
	cout << *max_element(dp , dp + n + 1);
}

