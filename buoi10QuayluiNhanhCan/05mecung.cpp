#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[100][100],n;
string s = "";
void test(int i, int j, string p)
{
	if(i == n && j == n)
	{
		cout << p << endl;
	}
	if(i + 1 <= n  && a[i + 1][j] == 1)
	{
		//s += "D";
		a[i+ 1][j] = 0;
		test(i + 1, j, p +"D");
		//s.pop_back();
		a[i+ 1][j] = 1;
	}
	if(j + 1 <= n && a[i][j + 1] == 1)
	{
		//s+= "R";
		a[i][j + 1] = 0;
		test(i, j + 1, p + "R");
		//s.pop_back();
		a[i][j + 1] = 1;
	}
}
int main()
{
	int t = 1;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= n; ++j)
			{
				cin >>a[i][j];
			}
		}
		test(1,1, "");
	}
	return 0;
}
