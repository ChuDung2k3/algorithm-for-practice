#include<bits/stdc++.h>

using namespace std;

int n, k , a[1005];

void next()
{
	int i = k;
	while(i >= 1 && a[i] == n - k + 1)
	{
		--i;
	}
	if(i == 0)
	{
		for(int i = 1; i <= k; ++i)
		{
			cout << i <<;
		}
		cout << " ";
	}
	else
	{
		a[i]++;
		for(int j = i +1; j <= k; ++j)
		{
			a[j] = a[j - 1] + 1;
		}
		for(int i = 1; i <= k; ++i)
		{
			cout << a[i];
		}
		cout << " ";
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= k; ++i)
		{
			cin >> a[i];
		}
		next();
	}
	
}