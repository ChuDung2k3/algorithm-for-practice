#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;

void solve(int n, int x)
{
	pair<int, int> a[n];
	for(int i = 0; i < n ; ++i)
	{
		cin >> a[i].fi;
		a[i].second = i;
	}
	sort(a, a + n);
	for(int i = 0; i < n- 3; ++i)
	{
		for(int j = i + 1; j < n - 2; ++j)
		{
			int y = x - a[i].first - a[j].first;
			int l = j + 1, r = n - 1;
			while(l < r)
			{
				if(a[l].first + a[r].fi == y)
				{
					cout <<a[i].second  +1<<" " << a[j].second + 1 << " " << a[l].second  + 1<< " "<< a[r].second + 1<< endl;
					return;
				}
				else if(a[l].fi + a[r].first < y) ++l;
				else --r;
			}
		}
	}
	cout << "IMPOSSIBLE\n";
}
int main()
{
	int n, x; cin >> n >> x;
	solve(n , x);
}
