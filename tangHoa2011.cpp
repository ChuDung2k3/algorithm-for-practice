#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n; cin >> n;
		int fre = 0, m1 = 0, m2 = 0;
		map<string, int > mp;
	while(n--)
	{
		int t; cin >> t;
		while(t--)
		{
			string s; cin >> s;
			mp[s]++;
		}
	}
	for(auto it : mp)
	{
		if(it.se >= m1)
			{
				m2 = m1;
				m1 = it.se;
			}
			else if(it.se > m2)
			{
				m2 = it.se;
			}
	}
	int cnt = 1;
		//cout <<m1 << " " << m2 << endl;
//		for(auto it : mp)
//		{
//			cout << it.first << " " << it.second << endl;
//		}
	for(auto it : mp)
	{
		
		if(cnt <= 2 && it.second == m1 )
		{
			cout << it.first << "\n";
			++cnt;
		}
	}
	for(auto it : mp)
	{
		if(cnt <= 2 && it.second == m2 )
		{
			cout << it.first << "\n";
			++cnt;
		}
	}
	return 0;
}

