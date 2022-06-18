#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string a; cin >> a;
		map<char, int> mp;
		for(char x : a) ++mp[x];
		int max_fre = 0;
		for(auto it : mp)
		{
			max_fre = max(max_fre, it.second);
		}
		int remain = a.size() - max_fre;
		if(max_fre - 1 <= remain) cout << "1\n";
		else cout << "-1\n";
	}
	return 0;
}
