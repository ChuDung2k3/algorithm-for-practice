#include<bits/stdc++.h>

using namespace std;

int a[100][100], n;

int dx[4] = {1, 0,0 , -1};
int dy[4] = {0, -1, 1, 0};
void test(int i, int j)
{
	a[i][j] = 0;
	for(int k = 0; k < 4; ++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
		{
			test(i1,j1);
		}
	}
}
int main()
{
	int cnt = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n;++j)
		{
			cin >> a[i][j];
		}
	}
	for(int i =1 ; i <= n; ++i)
	{
		for(int j = 1; j <= n;++j)
		{
			if(a[i][j])
			{
				++cnt;
				test(i,j);
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
