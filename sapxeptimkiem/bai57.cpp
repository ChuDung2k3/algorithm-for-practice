#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
	pair<int, int> a[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n, [](pair<int, int> a, pair<int, int>b){
		return a.second < b.second;
	});
	int tmp = a[0].second;
	int cnt = 1;
	for(int i = 1; i < n; ++i)
	{
		if(a[i].first >= tmp)
		{
			++cnt;
			tmp = a[i].second;
		}
	}
	cout << cnt << endl;
}
int main()
{
	int n; cin >> n;
	solve(n);
}
