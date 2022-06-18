#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int &x : a)cin >> x;
	sort(a, a+ n);
	int cnt = 0;
	int l = 0, r = n -1;
	while(l < r)
	{
		if(a[l] + a[r] <= x)
		{
			++cnt;
			++l; --r;
		}
		else
		{
			++cnt; --r;
		}
	}
	if(l == r) ++cnt;
	cout <<cnt << endl;
}
