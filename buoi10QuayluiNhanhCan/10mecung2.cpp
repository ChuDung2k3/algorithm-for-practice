#include<bits/stdc++.h>

using namespace std;

int n, a[100][100], ok = 0;
string s;
void test(int i, int j)
{
	if(i == n && j ==  n)
	{
		ok = 1;
		cout << s <<" ";
	}
	if(i + 1<= n && a[i + 1][j] == 1)
	{
		s += "D";
		a[i + 1][j] = 0;
		test(i + 1, j);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	if(j - 1 >= 1 && a[i][j - 1])
	{
		s += "L";
		a[i][ j - 1] = 0;
		test(i, j - 1);
		s.pop_back();
		a[i][j - 1] = 1;
	}
	if(j + 1 <= n && a[i][j + 1])
	{
		s+= "R";
		a[i][j + 1] = 0;
		test(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
	if(i - 1>= 1 && a[i - 1][j])
	{
		s += "U";
		a[i - 1][j] = 0;
		test(i - 1, j);
		s.pop_back();
		a[i - 1][j] = 1;
	}
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n;++i)
	{
		for(int j = 1; j <= n;++j)
		{
			cin >> a[i][j];
		}
	}
	a[1][1] = 0;
	test(1,1);
	if(!ok) cout << "-1\n";
	return 0;
}
