#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n; cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		pq.push(x);
	}
	int sum = 0;
	while(pq.size() > 1)
	{
		int d1 = pq.top(); pq.pop();
		int d2 = pq.top(); pq.pop();
		sum += d1 + d2;
		pq.push(d1 + d2);
	}
	cout << sum << endl;
	return 0;
}

