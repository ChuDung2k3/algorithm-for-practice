#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k;
		string s; cin >> s;
		map<char, int> mp;
		for(char x :  s)
		{
			mp[x]++;
		}
		priority_queue<int> pq;
		for(auto it : mp)
		{
			pq.push(it.second);
		}
		while(k > 0)
		{
			int top = pq.top();
			--top; --k; pq.pop();
			pq.push(max(top, 0));
		}
		ll ans = 0;
		while(!pq.empty())
		{
			ans += 1ll * pq.top() * pq.top();
			pq.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
