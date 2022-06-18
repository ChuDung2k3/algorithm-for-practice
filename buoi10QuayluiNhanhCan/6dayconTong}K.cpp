#include<bits/stdc++.h>

using namespace std;
int x[100], a[100], ok, n,k;
void test(int i, int pos, int sum)
{
	if(sum == k)
	{
		cout << "[";
		for(int j = 1; j < i; ++j)
		{
			cout << x[j];
			if(j == i -1) cout <<"] ";
			else cout <<" ";
		}
		ok = 1;
		return;
	}
	for(int j = pos; j <= n; ++j)
	{
		if(sum +a[j] <= k)
		{
			x[i] = a[j];
			test(i + 1, j + 1, sum + a[j]);
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n +1);
		test(1, 1, 0);
		if(ok) cout<<"\n";
		else cout<<"-1\n";
		cout << endl;
	}
	return 0;
}
