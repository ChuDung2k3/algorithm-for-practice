#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	cin >> m; int b[m];
	for(int &x : b) cin >> x;
	sort(a, a + n);
	sort(b, b+ m);
	int i = 0, j= 0, cnt = 0;
	while(i < n && j < m)
	{
		if(abs(a[i] - b[j]) <= 1)
		{
			++cnt;
			++i; ++j;
		}
		else if(a[i] - b[j] > 1)
		{
			++j;
		}
		else ++i;
	}
	cout << cnt << endl;
	return 0;
}
