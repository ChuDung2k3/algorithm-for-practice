#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vector<ll> v;
void init()
{
	
	queue<ll> q;
	q.push(6);
	q.push(8);
	while(1)
	{
		ll tmp = q.front(); q.pop();
		
		if(tmp > 1e18) break;
		else
		{
			v.pb(tmp);
			q.push(tmp*10 + 6);
			q.push(tmp*10 + 8);
		}
	}
}
int main()
{
	init();

//	for(ll x : v)
//	{
//		if(x == 686688888866688) cout<< '1';
//	}
	bool ok = false;
	int n; cin >> n;
	for(ll x : v)
	{
		if(x % n == 0)
		{
			cout << x;
			ok = true;
			break;
		}
	}
	if(!ok) cout << "0"<<'\n';
	return 0;
}

