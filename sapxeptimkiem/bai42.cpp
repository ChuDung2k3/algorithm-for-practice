#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin>> n>> k;
		int a[n];
		int cnt[100000] = {0};
		for(int &x: a)
		{
			cin >> x;
			cnt[x] = 1;
		}
		int ok = 0;
		for(int x : a)
		{
			if(x > k && cnt[x - k])
			{
				ok = 1;
				cout <<"1\n";
				break;
			}
		}
		if(ok== 0) cout <<"-1\n";
	}
	return 0;
}
