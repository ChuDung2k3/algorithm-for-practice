#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int s, d;
	cin >> s >> d;
	if(9 * d < s) {
		cout << "-1\n";
		return;
	}
	int res[d];
	memset(res, 0, sizeof(res));
	--s;
	for(int i = d - 1; i >= 1; --i)
	{
		if(s >= 9)
		{
			res[i] = 9;
			s-= 9;
		}
		else
		{
			res[i]= s;
			s = 0;
		}
	}
	res[0] = s + 1;
	for(int x : res) cout << x;
	cout << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
}
