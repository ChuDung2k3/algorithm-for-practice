#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		pair<int, int>p[n];
		int a[n], b[n]; 
		for(int &x : a)cin >> x;
		for(int &x : b) cin >> x;
		for(int i = 0; i < n; ++i)
		{
			p[i].first = a[i];
			p[i].second = b[i];
		}
		sort(p, p + n, [](pair<int, int> a, pair<int, int> b) -> bool{
		return a.second < b.second;});
		int cnt = 1;
		int tmp = p[0].second;
		for(int i = 1; i < n ;++i)
		{
			if(p[i].first >= tmp)
			{
				++cnt;
				tmp = p[i].second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
