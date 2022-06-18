#include<bits/stdc++.h>

using namespace std;

int n, a[100], x[100], res , m, k = 3;

void nhap()
{
	res = -1e9;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
}
void test(int i)
{
	for(int j = x[i - 1] + 1; j <= n- k + i; ++j)
	{
		x[i] = j;
		if(i == k)
		{
			int sum = 0;
			for(int j = 1; j <= k; ++j)
			{
				sum += a[x[j]];
			}
			if(sum <= m)
			{
				res = max(res, sum);
			}
		}
		else test(i + 1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		nhap();
		test(1);
		cout << res << endl;
	}
}
