#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	priority_queue<ll, vector<ll>, greater<ll>> p;
	int t, k;
	cin >> t >> k;
	for(int i = 0; i < t; ++i)
	{
		int x; cin >> x;
		p.push(x);
	}
	int n = k;
	ll sum = 0, cost = 0;
	while(p.size() >1	)
	{
		ll tmp = 0;
		while(!p.empty() && k > 0)
		{
//		cout << 1;
			tmp += p.top();
			p.pop();
			--k;
		}
		k = n;
		//cout << tmp << " ";
		p.push(tmp);
		cost += tmp;
		//cout << cost << " ";
	}
//	while(p.size() > 1)
//	{
//		cost += p.top();
//		p.pop();
//	}
//	cost += p.top();
	cout << cost << endl;
	return 0;
}

