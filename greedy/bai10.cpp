#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		priority_queue<int, vector<int>, greater<int>> q;
		int n; cin >> n;
		for(int i = 0; i < n;++i)
		{
			int x; cin >>x;
			q.push(x);
		}
		int ans = 0;
		while(q.size() > 1)
		{
			int x = q.top();
			q.pop();
			int y = q.top();
			q.pop();
			ans += x + y;
			q.push(x + y);
		}
		cout << ans << endl;
	}
	return 0;
}
