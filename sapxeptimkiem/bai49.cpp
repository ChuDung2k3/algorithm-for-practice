#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		map<int, int>mp;
		set<int> se;
		int n; cin >> n;
		int a[n];
		for(int &x : a)
		{
			cin >> x;
			mp[x]++;
			se.insert(x);
		}
		int fre = 0;
		int d = se.size() - 1;
		for(auto it: mp) fre = max(fre, it.second); 
	
		if(fre - d > 1)
		{
			cout << d + 1<< endl;
		}
		else cout << min(fre, d) <<endl;
	}
	return 0;
}
