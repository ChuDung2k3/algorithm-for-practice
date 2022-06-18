#include<bits/stdc++.h>

using namespace std;

void next(string s)
{
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		--i;
	}
	if(i != -1) s[i] = '1';
	cout << s << endl;
}
int main()
{
	int t;
	string s;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		cin >> s;
		next(s);
	}
	return 0;
}
