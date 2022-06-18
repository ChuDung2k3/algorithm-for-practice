#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n; cin >> n;
	map<string, int> l, r;
	for(int i = 0; i < n; ++i)
	{
		string s; cin >> s;
		if(s[0] == 'L') l[s.substr(1, sizeof(s))]++;
		else r[s.substr(1, sizeof(s))]++;
	}
	int res = 0;
	for(auto it : l)
	{
		if(r.count(it.fi))
		{
			res += min(it.second, r[it.fi]);
		}
	}
	cout << res << endl;
	return 0;
}

