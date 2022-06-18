#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.fi != b.fi)
	{
		return a.fi < b.fi;
	}
	else return a.se <= b.se;
}
int main()
{
	int n; cin >> n;
	pair<int, int> a[n];
	int max_time = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i].fi >> a[i].se;
		max_time = max(a[i].fi, max_time);
	}
	sort(a, a + n, cmp);
	int tmp = n - 1;
	ll sum = 0;
	priority_queue<int> p;
//	cout << max_time<< endl;
//for(int i = 0; i < n; ++i)
//{
//	cout << a[i].fi << " " << a[i].se << endl;
//}
	while(max_time > 0)
	{
		while(tmp >= 0 && a[tmp].fi == max_time)
		{
			p.push(a[tmp].se);
			--tmp;
		}
		if(!p.empty())
		{
			sum += p.top();
			p.pop();
		}
		--max_time;
	}
	cout <<sum << endl;
	return 0;
}

