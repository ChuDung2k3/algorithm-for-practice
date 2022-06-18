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
ll a[201];
void init()
{
	queue<string> q;
	q.push("8");
	while(1)
	{
		string tmp = q.front();
		q.pop();
		if(tmp.size() == 19) break;
		v.pb(stoll(tmp));
		q.push(tmp +"0");
		q.push(tmp +"8");
	}
	for(int i = 1; i <= 200; ++i)
	{
		for(ll x : v)
		{
			if(x % i == 0)
			{
				a[i] = x;
				break;
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	init();
	while(t--)
	{
		int n; cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}
