#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k;
		string s; cin >> s;
		map<char, int> mp;
		for(char x : s) ++mp[x];
		priority_queue<int> q;
		for(auto it : mp) q.push(it.second);
		ll ans = 0;
		while(k--)
		{
			int tmp = q.top();
			q.pop();
			--tmp;
			q.push(max(tmp, 0));
		}
		while(!q.empty())
		{
			ans += q.top() * q.top();
			q.pop();
		}
		cout << ans << endl;
	}
}
