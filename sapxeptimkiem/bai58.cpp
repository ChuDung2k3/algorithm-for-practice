#include<bits/stdc++.h>

using namespace std;

void solve(int n, int x)
{
	pair<int, int> a[n + 1];
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a + 1, a + n + 1);
	int l = 1,r = n;
	while(l < r)
	{
		if(a[l].first + a[r].first == x)
		{
			cout <<a[l].second << " " <<a[r].second << endl;
			return;
		}
		else if(a[l].first + a[r].first < x)
		{
			++l;
		}
		else --r;
	}
	cout << "IMPOSSIBLE\n";
}
int main()
{
	int n, x;
	cin >> n >> x;
	solve(n,x);
	return 0;
}
