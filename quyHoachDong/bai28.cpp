#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
//F[i][j] : So luong mang tinh den chi so i hop le va gia tri tai chi so i la j
//F[n][j] : 1 <= j <= m
//F[i - 1][j - 1] + F[i - 1][j] + F[i - 1][j + 1]

ll F[100001][105];
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n>> m;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    if(a[1] != 0)
    	F[1][a[1]] = 1;
    else
    	for(int j = 1; j <= m; ++j)
    		F[1][j] = 1;
    
    for(int i = 2; i <= n; ++i)
    {
    	if(a[i] != 0)
    	{
    		for(int j = -1; j <= 1; ++j)
    		{
    			int tmp = a[i] + j;
    			if(tmp >= 1 && tmp <= m)
    			{
    				F[i][a[i]] += F[i - 1][tmp];
    				F[i][a[i]] %= mod;
				}
			}
		}
		else
		{
			for(int j = 1; j <= m; ++j)
			{
				for(int t = -1; t <= 1; ++t)
				{
					int tmp = j + t;
					if(tmp >= 1 && tmp <= m)
					{
						F[i][j] += F[i - 1][tmp];
						F[i][j] %= mod;
					}
				}
			}
		}
	}
	ll sum = 0;
	for(int i = 1; i <= m; ++i)
	{
		sum += F[n][i];
		sum %= mod;
	}
	cout << sum << endl;
	return 0;
}

