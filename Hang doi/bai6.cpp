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

vector<ll> v;
void init()
{
	queue<string> q;
	q.push("1");
	while(1)
	{
		string tmp = q.front();
		q.pop();
		if(tmp.size() == 19) break;
		v.pb(stoll(tmp));
		q.push(tmp + "0");
		q.push(tmp + "1");
	}
}
int main()
{
	int t; cin >> t;
	init();
	while(t--)
	{
		int cnt = 0;
		ll n; cin >> n;
		for(ll x : v)
		{
			if(x >= n) break;
			else
			{
				++cnt;

			}
		}
		cout << cnt << endl;
	}
	return 0;
}
