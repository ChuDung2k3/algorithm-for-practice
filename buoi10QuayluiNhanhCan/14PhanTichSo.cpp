#include<bits/stdc++.h>

using namespace std;

int n, k, a[100],x[100];

void test(int i, int sum, int pos)
{
	if(sum == k)
	{
		cout <<"[";
		for(int j = 1; j < i; ++j)
		{
			cout << x[j];
			if(j == i -1) cout << "] ";
			else cout <<" ";
		}
	}
	for(int j = pos; j <= n; ++j)
	{
		if(sum + a[j] <= k)
		{
			x[i] = a[j];
			test(i + 1,sum + a[j], j);
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		test(1,0,1);
	}
	
}
