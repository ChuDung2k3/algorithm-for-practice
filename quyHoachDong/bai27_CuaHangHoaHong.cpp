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
    int a[n], res = 0;
    for(int i = 0; i < n;++i) cin >> a[i];
    vector<int> dp1(n , 1);
	vector<int> dp2(n, 1);
    for(int i = 1; i < n; ++i)
    {
    	if(a[i - 1] < a[i]) dp1[i] = dp1[i - 1] + 1;
    	res= max(res, dp1[i]);
	}
	for(int i = n - 2; i >= 0; --i)
	{
		if(a[i + 1] > a[i]) dp2[i] = dp2[i + 1] + 1;
		res = max(res, dp2[i]);
	}
	for(int i = 1; i <= n - 2; ++i)
	{
		if(a[i - 1] < a[i + 1]) res = max(res, dp1[i - 1] + dp2[i + 1]);
	}
	cout << res <<'\n';
	return 0;
}

