#include<bits/stdc++.h>

using namespace std;


int solve()
{
	int n, s, m;
	cin >> n >> s >> m;
	int lt = m*s;
	 s = s - s/7;
	for(int i = 1; i <= s; ++i)
	{
		if(n * i> lt) return i;
	}
	return -1;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cout << solve();
	}
	return 0;
}
