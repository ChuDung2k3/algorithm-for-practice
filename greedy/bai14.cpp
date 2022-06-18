#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res;
string s;
int n;
int x[100];
bool check(ll n)
{
	ll tmp = cbrt(n);
	return tmp * tmp *tmp ==n;
}
void ql(int i)
{
	for(int j = 0; j <= 1; ++j)
	{
		x[i] = j;
		if(i == n- 1)
		{
			ll tmp = 0;
			for(int k = 0; k < n; ++k)
			{
				if(x[k])
				{
					tmp = tmp*10 + (s[k] - '0');
				}
			}
			if(check(tmp) && tmp > res) res = tmp;
		}
		else ql(i + 1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{	
		s = "";
		memset(x, 0, sizeof(x));
		res = 0;
		cin >> s;
		n = s.size();
		ql(0);
		if(res == 0)cout << "-1\n";
		else cout << res << endl;
	}
}
