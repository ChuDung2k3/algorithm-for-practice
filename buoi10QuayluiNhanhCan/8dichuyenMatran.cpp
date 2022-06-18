#include<bits/stdc++.h>

using namespace std;

int n, m, a[100][100], cnt = 0;

void test(int i, int j)
{
	if(i == n && j == m)
	{
		++cnt;
	}
	if(i + 1 <= n) test(i + 1, j);
	if(j + 1 <= m) test(i, j + 1);
}
int main()
{
	int  t; cin >> t;
	while(t--)
	{
		cnt = 0;
		cin >> n >> m;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= m; ++j)
			{
				cin >> a[i][j];
			}
		}
		test(1,1);
		cout << cnt << endl;
	}
	return 0;
}
