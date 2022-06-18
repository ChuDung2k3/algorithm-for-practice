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

vi trai(vi a)
{
	vi b(6);
	b[2] = a[2];
	b[5] = a[5];
	b[0] = a[3];
	b[1] = a[0];
	b[3] = a[4];
	b[4] = a[1];
	return b;
}
vi phai(vi a)
{
	vi b(6);
	b[0] = a[0];
	b[1] = a[4];
	b[2] = a[1];
	b[3] = a[4];
	b[4] = a[5];
	b[5] = a[2];
	return b;
}

bool cmp(vi a, vi b)
{
	for(int i = 0; i < 6; ++i)
	{
		if(a[i] != b[i]) return false;
		
	}
	return true;
}
int TC()
{
	vi a(6), b(6);
	for(int i = 0; i < 6; ++i) cin >> a[i];
	for(int i = 0; i < 6; ++i) cin >> b[i];
	queue<pair<vi, int>> q;
	q.push(mp(a, 0));
	while(1)
	{
		pair<vi, int> top = q.front(); q.pop();
		if(cmp(top.fi, b))
		{
			return top.se;
		}
		q.push(mp(trai(top.fi), top.se + 1));
		q.push(mp(phai(top.fi), top.se + 1));
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		TC();
	}
	return 0;
}
