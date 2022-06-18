#include<bits/stdc++.h>
using namespace std;

int c, l;
bool check(int a[], int n)
{
	if(l %2 == 0) return true;
	sort(a, a+ n);
	for(int i = 1; i < n; ++i)
	{
		if(a[i] - a[i - 1] == 1) return 1;
	}
	return 0;
}
int main()
{
	int t; cin >>t;
	while(t--)
	{
		l = 0, c= 0;
		int n;
		cin >>n;
		int a[n];
		for(int &x : a)
		{
			cin >> x;
			if(x%2 == 0) ++l;
			else ++c;
		}
		if(check(a,n)) cout <<"YES\n";
		else cout << "NO\n";
	}
	return 0;
}
