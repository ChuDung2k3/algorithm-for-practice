#include<bits/stdc++.h>

using namespace std;

int n, ok ,a[100];

void ktao()
{
	for(int i = 1; i < n; ++i)
	{
		a[i] = 0;
	}
}
void sinh()
{
	for(int i = n; i >= 2; --i)
	{
		if(a[i] == a[i - 1]) a[i] = 0;
		else a[i] = 1;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		ktao();
		ok = 1;
		while(ok)
		{
			for(int i = 1; i < n; ++i)
			{
				cout << a[i];
			}
			sinh();
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
