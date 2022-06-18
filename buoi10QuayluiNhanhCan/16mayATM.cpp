#include<bits/stdc++.h>

using namespace std;

int n, s, a[100], x[100], k, ok;

void test(int i)
{
	if(ok) return ;
	for(int j = x[i - 1] + 1; j <= n - k + i; ++j)
	{
		x[i] = j;
		if(i == k)
		{
			int sum = 0;
			for(int j = 1; j <= k; ++j)
			{
				sum += a[x[j]];
			}
			if(sum == s) ok = true;
		}
		else test(i + 1);
	}
}
void inp()
{
	cin >> n >> s;
	for(int i = 1; i <= n; ++i)
	{
		cin >>a[i];
	}
	sort(a + 1, a + n + 1, greater<int >());
	for(int i = 1; i <= n; ++i)
	{
		k = i;
		test(1);
		if(ok)
		{
			cout << i << endl;
			return;
		}
	}
	cout << "-1\n";
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
	}
}
