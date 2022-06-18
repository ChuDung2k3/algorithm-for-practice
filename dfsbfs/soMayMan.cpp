#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

set<ll> s;
int a[4] = {0, 1, 2, 5};
void bfs()
{
	queue<ll> q;
	for(int i = 1; i < 4; ++i)
	{
		q.push(a[i]);
	}
	while(1)
	{
		ll tmp = q.front(); q.pop();
		
		if(tmp >= 1e9) break;
		else
		{
			s.insert(tmp);
			for(int i = 0; i < 4; ++i)
			{
				q.push(tmp*10 + a[i]);
			}
		}
	}
}
int main()
{
	int n; cin >> n;
	bfs();

	for(ll x : s)
	{
		if(x % n == 0)
		{
			cout << x << '\n';
		}
	}
	return 0;
}

