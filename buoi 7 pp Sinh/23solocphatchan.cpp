#include<bits/stdc++.h>

using namespace std;

string s;
vector<string> v;
int n, ok;
void sinh()
{
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '8')
	{
		s[i] = '6';
		--i;
	}
	if(i == -1) ok = 0;
	else s[i] = '8';
}
void init()
{
	for(int i = 1; i <= 7; ++i)
	{
		s = string(i, '6');
		ok = 1;
		while(ok)
		{
			string tmp = s;
			reverse(tmp.begin(), tmp.end());
			v.push_back(s + tmp);
			sinh();
		}
	}
}
int main()
{
	init();
	int t; cin >> t;
	while(t--)
	{
		int cnt = 0;
		cin >> n;
		for(int i = 0; i < n; ++i)
		{
			cout <<v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
