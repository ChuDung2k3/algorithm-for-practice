#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> a,b;
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			a.push_back(x);
			b.push_back(x);
		}
		sort(b.begin(), b.end());
		for(int x : a)
		{
			vector<int>::iterator it = upper_bound(b.begin(), b.end(),x);
			if(it == b.end())
			{
				cout <<"_ ";
			}
			else cout <<*it << " ";
		}
		cout << endl;
		a.clear();b.clear();
	}
	return 0;
}
