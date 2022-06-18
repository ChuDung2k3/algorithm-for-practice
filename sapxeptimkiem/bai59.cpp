#include<bits/stdc++.h>

using namespace std;

void solve(int n, int x)
{
	pair<int, int> a[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a + n);
	for(int i = 0;i < n - 2; ++i)
	{
		int y = x - a[i].first;
		int l = i + 1, r = n -1;
		while(l < r)
		{
			if(a[l].first + a[r].first == y)
			{
				cout << a[i].second + 1 <<" " <<a[l].second + 1<< " " << a[r].second + 1<< endl;
				return;
			}
			else if(a[l].first + a[r].first < y) ++l;
			else --r;
		}
	}
	cout << "IMPOSSIBLE\n";
}
int main()
{
	int n, x;
	cin >> n >> x;
	solve(n, x);
}
