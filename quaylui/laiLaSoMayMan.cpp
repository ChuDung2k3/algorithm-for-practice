#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

ll x[101], n, sum = 1e18, cnt4, cnt7;
set<ll> s;
void in()
{
	for(int i = 1; i <= n; ++i)
	{
		cout << x[i];
	}
}
void sinh(int i, ll res, int cnt4, int cnt7)
{
	//cout <<res << " ";
	for(int j = 0; j <= 1; ++j)
	{
		x[i] = j;
		if(res >= n && i %2 == 1)
		{
			if(cnt4 == cnt7) sum = min(sum, res);
//			cout << res << " " << ;
			return;
		}
		else if(x[i] == 0)
		{
			
			sinh(i + 1, res*10 + 4, cnt4 + 1, cnt7);// i == 2 nhung x = 4 chu khong phai 44
		}
		else
		{
			sinh(i + 1, res*10 + 7, cnt4, cnt7 + 1);
		}
//		else if(x[i] == 1)sinh(i + 1, cnt4, cnt7 + 1);
//		else if(x[i] == 0) sinh(i + 1, cnt4 + 1, cnt7);
	}
}
int main()
{
	cin >> n;
	sinh(1, 0, 0,0);
	cout <<sum;
	return 0;
}
