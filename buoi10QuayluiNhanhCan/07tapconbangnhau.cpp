#include<bits/stdc++.h>

using namespace std;

int x[100],a[100], n,k, sum = 0;
void test(int i, int pos)
{
	for(int j = pos; j <= n; ++j)
	{
		x[i] = a[j];
		sum += a[j];
		if( sum == k)
		{
			for(int l = 1; l <= i; ++l)
			{
				cout << x[l] << " ";
			}
			cout << endl;
		}
		else test(i + 1, j + 1);
		sum -= a[j];
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n>> k;
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		sort(a + 1, a+ n + 1);
	test(1,1);
	cout << endl;
	}
}
