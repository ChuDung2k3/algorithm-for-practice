#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>res;
ll a[505];
int ok;
void next(string &s)
{
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '9')
	{
		s[i] = '0';
		--i;
	}
	if(i == -1) ok = 0;
	else s[i] = '9';
}
int main()
{
	string s(13,'0');
	ok = 1;
	next(s);
	while(ok)
	{
		res.push_back(stoll(s));
		next(s);
	}
	for(int i = 1; i <= 500; ++i)
	{
		for(int x : res)
		{
			if(a[i] == 0 && x % i == 0)
			{
				a[i] = x;
			}
		}
	}
	int t;cin >> t;
	while(t--)
	{
		int b; cin >> b;
		if(a[b] != 0) cout << a[b] << endl;
	}
	return 0;
}
