#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, a[1001];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i)
    	cin >> a[i];
	int dp[n];
	for(int i = 0; i < n; ++i)
	{
		dp[i] = 1;
		for(int j = 0; j < i; ++j)
		{
			if(a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	cout << *max_element(dp, dp + n) << endl;
}

