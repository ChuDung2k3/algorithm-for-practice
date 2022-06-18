#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
ll n, len;
char timkiem(ll n, ll k)
{
	if(n <= s.size()) return s[n - 1];
	if(n <= k/2) return timkiem(n, k/2);
	else
	{
		ll tmp = n - k/2;
		if(tmp == 1) return timkiem(k/2, k/2);
		else return timkiem(tmp - 1, k/2);
	}
}
void nhap()
{
	cin >> s >> n;
	len = s.size();
	while(len < n) len *= 2;
	cout << timkiem(n, len) << endl;
}
int main()
{
	int t; cin >> t;
	nhap();
}

