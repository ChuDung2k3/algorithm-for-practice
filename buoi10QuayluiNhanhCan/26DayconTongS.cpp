#include<bits/stdc++.h>

using namespace std;

int n, a[100], x[100], res = 1e9, s;
void nhap()
{
	cin >> n >> s;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, greater<int>());
}
void test(int sum, int i, int pos)
{
	for(int j = pos; j <= n; ++j)
	{
		if(sum + a[j] <= s)
		{
			sum += a[j];
			++i;
			if(sum == s) res = min(res, i);
			else test(sum, i, j + 1);
			sum -= a[j];
			--i;
		}
	}
}
int main()
{
	nhap();
	test(0, 0, 1);
	if(res == 1e9) cout << "-1\n";
	else cout << res << endl;
}
