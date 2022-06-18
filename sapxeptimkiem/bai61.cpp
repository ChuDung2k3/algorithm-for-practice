#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a + n);
	long long sum = 1;
	for(int i = 0; i < n; ++i)
	{
		if(a[i] > sum) break;
		sum += a[i];
	}
	cout << sum << endl;
}
