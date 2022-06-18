#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k; cin >> n >> k;
		int a[n];
		int bsum = 0;
		for(int &x : a){
			cin >> x;
			bsum += x;
		}
		int t = min(k, n - k);
		sort(a, a+ n);
		int sum = 0;
		for(int i = 0; i < t; ++i)
		{
			sum += a[i];
		}
	
		cout << bsum - 2 * sum << endl;
	}
	return 0;
}
