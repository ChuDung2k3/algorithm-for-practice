#include<bits/stdc++.h>

using namespace std;
int n, a[100], x[100];

vector<string> ans;
void nhap()
{
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	ans.clear();
}
void test(int i, int pos)
{
	for(int j = pos; j <= n; ++j)
	{
		x[i] = a[j];
		if(i > 1)
		{
			string res = "";
			for(int j =1 ; j <= i; ++j)
			{
				res+= to_string(x[j]) + " ";
			}
			ans.push_back(res);
		}
		test(i + 1, j + 1);
	}
}
int main()
{
	nhap();
	test(1, 1);
	sort(begin(ans), end(ans));
	for(string x : ans)
	{
		cout << x << endl;
	}
}
