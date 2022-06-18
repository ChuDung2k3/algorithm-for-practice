#include<bits/stdc++.h>

using namespace std;
int n, ok;
string s;
vector<string> v;

void sinh()
{
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		--i;
	}
	if(i == -1) ok = 0;
	else s[i] = '1';
}
void init()
{
	for(int i = 1; i <= 15; i++)
	{
		s = string(i, '0');
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
		cin >> n;
		for(int i = 0; i < v.size(); ++i)
		{
			if(v[i].size() <= n) cout << v[i] << " ";
			else break;
		}
		cout << endl;
	}
	return 0;
}
