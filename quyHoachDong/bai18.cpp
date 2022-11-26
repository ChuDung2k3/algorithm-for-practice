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
    int n, m;
    cin >> n>> m;
    int a[n + 1][m + 1] ={0};
    for(int i = 1; i <= n; ++i)
    	for(int j = 1; j <= m; ++j)
    		cin >> a[i][j];
    
    for(int i = 1; i <= n; ++i)
    {
    	for(int j = 1; j <= m; ++j)
    	{
    		if(i == 1) a[i][j] = a[i][j - 1] + a[i][j];
    		else if(j == 1) a[i][j] += a[i - 1][j];
    		else
    		{
    			a[i][j] += max({a[i- 1][j], a[i][j - 1], a[i -1][j -1]});
			}
		}
	}
	cout << a[n][m] <<'\n';
	return 0;
}

