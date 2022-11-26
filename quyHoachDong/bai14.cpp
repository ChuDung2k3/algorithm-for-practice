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
    int res[n + 1] = {0};
    res[0] = 1;
    int mod = 1e9 + 7;
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= min(i, 6); ++j)
    	{
    		res[i] = (res[i] + res[i - j]) % mod;
		}
	}
	cout << res[n] <<'\n';
	return 0;
}

