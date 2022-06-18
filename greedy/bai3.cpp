#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a + n);
		int t = 0;
		for(int i =0 ; i < n; ++i)
		{
			t += a[i] *i;
			t % 1000000007;
		}
		cout << t << endl;
	}
}
