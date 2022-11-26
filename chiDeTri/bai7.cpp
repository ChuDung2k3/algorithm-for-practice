#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n;
vector<ll> a, b;
void inp(){
	cin >> n;
	a.resize(n);
	b.resize(n - 1);
	for(int i = 0 ; i < n; ++i) cin >> a[i];
	for(int i = 0; i < n - 1; ++i) cin >> b[i];
}
int bs(int l, int r)
{
	int res = n - 1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] != b[m])
		{
			res = m + 1;
			r = m - 1;
		}
		else l = m + 1;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	inp();
	cout << bs(0, n - 2);
    return 0;
}

