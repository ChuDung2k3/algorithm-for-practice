#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.se >= b.se;
}
int main()
{
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i = 0 ; i < n ; ++i)
	{
		cin >> a[i].fi >> a[i].se;
	}
	sort(a, a + n, cmp);
	bool used[n];
	ll sum = 0;
//	for(int i = 0; i < n; ++i)
//	{
//		cout << a[i].fi << " " << a[i].se << "\n";
//	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = a[i].fi; j >= 1; --j)
		{
			if(used[j] == false)
			{
				used[j] = true;
				//cout << a[i].se << " " << j << endl;
				sum += a[i].se;
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}



