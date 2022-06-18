#include<bits/stdc++.h>

using namespace std;

int a[100][100], h1[100], d1[100], d2[100], lonnhat;
int n = 8;
void test(int i, int sum)
{
	for(int j = 1; j <= 8; ++j)
	{
		if(h1[j] && d1[i +j - 1] && d2[j - j + n])
		{
//			sum += a[i][j];
			h1[j] = d1[i + j - 1] = d2[i - j + n] = 0;
			if(i == 8) lonnhat = max(sum, lonnhat);
			else test(i + 1, sum + a[i][j]);
			h1[j] = d1[i + j - 1] = d2[i - j + n] = 1; 
//			sum -= a[i][j];
		}
	}
}
int main()
{
	int t = 1;
	while(t--)
	{
		lonnhat = INT_MIN;
		memset(h1, 1, sizeof(h1));
		memset(d2, 1, sizeof(d2));
		memset(d1, 1 , sizeof(d1));
		for(int i = 1; i <= 8; ++i)
		{
			for(int j = 1; j <= 8; ++j)
			{
				cin >> a[i][j];
			}
		}
		test(1,0);
		cout << lonnhat << endl;
	}
	return 0;
}
