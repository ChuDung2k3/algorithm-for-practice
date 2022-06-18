#include<bits/stdc++.h>

using namespace std;


bool cmp(pair<int, int> a, pair<int, int>b)
{
	if(a.first != b.first)
	{
		return abs(a.first) < abs(b.first);
	}
	else return a.second < b.second;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> a(n);
		for(int i = 0; i < n;++i)
		{
			int x; cin >> x;
			a[i].first = x;
			a[i].second = i;
		}
		sort(a.begin(), a.end(), cmp);
		int sum = INT_MAX, tmp = INT_MAX, idx;
		for(int i = 0; i< n - 1; ++i)
		{
			if(tmp > abs(a[i].first + a[i + 1].first))
			{
				tmp = a[i].first + a[i + 1].first;
				idx = min(a[i].second, a[i + 1].second);
			}
			else if(tmp == (a[i].first + a[i + 1].first))
			{
				if(idx > min(a[i].second , a[i + 1].second))
				{
					idx = min(a[i].second , a[i + 1].second);
				}
			}
		}
		cout << tmp << endl;
	}
	return 0;
}
