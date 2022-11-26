#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int F[501][62700];
const int mod = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>> n;
    int sum = n * (n + 1) / 2;
    if(sum % 2)
    	cout <<0 <<'\n';
    else
    {
    	sum /= 2;
    	F[0][0]= 1;
    	for(int i = 1; i <= n; ++i)
    	{
    		for(int j = 0; j <= sum; ++j)
    		{
    			int remain = j - i;
    			F[i][j] = F[i - 1][j];
    			if(remain >= 0)
    			{
    				F[i][j] += F[i - 1][remain];
    				F[i][j] %= mod;
				}
			}
		}
	cout << F[n - 1][sum] <<'\n';
	}
	return 0;
}

