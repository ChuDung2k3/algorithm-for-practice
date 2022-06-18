#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int gcd(int a, int b)
{
	if(b == 0) return a;
	else return gcd(b, a % b);
}
int main()
{
	int n; cin >> n;
	map<pair<int, int>, int > mp;
	int cnt = 1;
	for(int i = 0; i < n; ++i)
	{
		int x, y; cin >> x >> y;
		int t = gcd(abs(x), abs(y));
		x  /= t;
		
		y /= t;
		mp[{x, y}]++;
		
	}

	cout << mp.size() << endl;
	return 0;
}

