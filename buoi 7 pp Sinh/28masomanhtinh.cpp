#include<bits/stdc++.h>

using namespace std;

int n,ok,a[1000];
void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		a[i] = 1;
	}
}
void sinh()
{
	int i = n;
	while(i >= 1 && a[i] == n) --i;
	if(i == 0) ok = 0;
	else
	{
		++a[i];
		for(int j = i + 1; j <= n; ++j)
		{
			a[j] = 1;
		}
	}
}
int main()
{
	vector<string> hoanvi;
	cin >> n;
	string tmp = "";
	for(int i = 1; i <= n; ++i)
	{
		tmp += 'A' + i - 1;
	}
	do
	{
		hoanvi.push_back(tmp);
	}while (next_permutation(tmp.begin(), tmp.end()));
	ok = 1;
	ktao();
	vector<string> chinhhop;
	while(ok)
	{
		string tmp = "";
		for(int i = 1; i <= n; ++i)
		{
			tmp+= to_string(a[i]);
		}
		chinhhop.push_back(tmp);
		sinh();
	}
	for(string x: hoanvi)
	{
		for(string y : chinhhop)
		{
			cout << x << y;
		cout << endl;
		}
	}
	return 0;
}
