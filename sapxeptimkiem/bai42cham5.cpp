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
		int m1 = 1e9, m2 =1e9;
		for(int i = 0; i< n; ++i)
		{
			if(m1 > a[i])
			{
				m2 = m1;
				m1 = a[i];
			}
			else if(m2 > a[i] && a[i] != m1)
			{
				m2 = a[i];
			}
		}
		if(m2 != 1e9) cout << m2 <<" " << m1 << endl;
		else cout << "-1\n";
	}
	return 0;
}
