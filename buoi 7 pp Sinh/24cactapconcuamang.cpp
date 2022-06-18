#include<bits/stdc++.h>

using namespace std;

int n,ok,a[100],x[100];
void ktao()
{
	for(int i = 1; i <= n ; ++i)
	{
		x[i] = 0;
	}
}
void sinh()
{
	int i = n;
	while(i >= 0 && x[i] == 1)
	{
		x[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else x[i] = 1;
}
bool cmp(string a, string b)
{
	if(a.size() != b.size()) return a.size() < b.size();
	else return a < b;
}
int main()
{
	vector<string> res;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	ok = 1;
	ktao();
	sinh();
	while(ok)
	{
		string tmp = "";
		for(int i = 1; i <= n; ++i)
		{
			if(x[i])
			{
				tmp += to_string(a[i]);
				tmp += " ";
			}
		}
			res.push_back(tmp);
		sinh();
	}
	sort(res.begin(), res.end(), cmp);
	for(int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << endl;
	}
}
