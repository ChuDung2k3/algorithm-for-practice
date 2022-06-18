#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		vector<int>b(a, a  + n);
		sort(b.begin(), b.end());
		int ok = 1;
		for(int i = 0; i < n; ++i)
		{
			if(b[i] != a[i] && b[i] != a[n - i -1])
			{
				ok = 0;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
