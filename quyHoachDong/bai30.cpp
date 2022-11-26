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
    int a, b; cin >> a >> b;
    int F[a + 1][b + 1];
    for(int i= 1; i <= a; ++i)
    {
    	for(int j = 1; j <= b; ++j)
    		F[i][j] = INT_MAX;
	}
    for(int i = 1; i <= a; ++i)
    {
    	for(int j = 1; j <= b; ++j)
    	{
    		if(i == j) F[i][j] = 0;
    		else
    		{
    			for(int k = 1; k < i; ++k)
    				F[i][j] = min(F[i][j], F[k][j] + F[i - k][j] + 1);
    			for(int k = 1; k < j; ++k)
    				F[i][j] = min(F[i][j], F[i][k] + F[i][j - k] + 1);
			}
		}
	}
	cout << F[a][b] <<'\n';
	return 0;
}

