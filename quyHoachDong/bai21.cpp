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
    int sum = 0, a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    	sum += a[i];
	}
	int dp[sum + 1] ={0};
	dp[0] = true;
	for(int i = 0; i < n; ++i)
	{
		for(int j = sum; j >= a[i]; --j)
		{
			if(dp[j - a[i]]) dp[j] = true;
		}
	}
	for(int i = 0; i <= sum; ++i)
	{
		if(dp[i]) cout <<i <<" ";
	}
	return 0;
}

