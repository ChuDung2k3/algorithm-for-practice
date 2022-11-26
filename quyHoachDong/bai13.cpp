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
    int a[n];for(int &x : a)cin >> x;
    int dp1[n + 1] = {0}, dp2[n + 1] = {0};
    for(int i = 0; i < n; ++i)
    {
    	dp1[i] = a[i];
    	for(int j = 0; j < i; ++j)
    	{
    		if(a[i] > a[j])
    			dp1[i] = max(dp1[i], dp1[j] + a[i]);
		}
	}
	for(int i = n - 1; i >= 0; --i)
	{
		dp2[i] = a[i];
		for(int j = n - 1; j > i; --j)
		{
			if(a[i] > a[j])
			{
				dp2[i] = max(dp2[i], dp2[j] + a[i]);
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		res = max(res, dp1[i] + dp2[i] - a[i]);
	}
	cout << res << '\n';
	return 0;
}

