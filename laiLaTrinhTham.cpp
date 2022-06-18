#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;//scanf
	int a[n + 1];
	for(int i = 1; i <= n; ++i) cin >> a[i];
	deque<int> dq;
	for(int i = 1; i <= n; ++i)
	{
		while(!dq.empty() && a[i] > a[dq.back()]) dq.pop_back();
		dq.push_back(i);
		if(i >= k)
		{
			if(dq.front() <= i - k) dq.pop_front();
			cout << a[dq.front()] << " ";
		}
	}
	return 0;
}

