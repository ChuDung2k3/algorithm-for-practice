#include<bits/stdc++.h>

using namespace std;

void solve(int n)
{
	vector<pair<int, int>> a;
	for(int i = 0; i < n; ++i)
	{
		int x,y;
		cin >> x>> y;
		a.push_back({x, 1});
		a.push_back({y,-1});
	}
	sort(a.begin(), a.end());
	int ans = 0, cnt = 0;
	for(auto it : a)
	{
		ans += it.second;
		cnt = max(ans, cnt);
	}
	cout << cnt << endl;
}
int main()
{
	int n;
	cin >> n;
	solve(n);
}
