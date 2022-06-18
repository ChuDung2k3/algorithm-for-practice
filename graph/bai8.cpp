#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n; cin >> n;
	int a[n + 1][n + 1];
	for(int i= 1; i <= n; ++i)
	{
		for(int j = 1; j <= n ; ++j)
		{
			cin >> a[i][j];
			if(a[i][j] && i < j)
			{
				cout << i << " " << j << " " << a[i][j] << endl;
			}
		}
	}
	
	
	return 0;
}
