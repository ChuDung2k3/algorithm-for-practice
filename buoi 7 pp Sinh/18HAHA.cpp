#include<bits/stdc++.h>

using namespace std;

// H = 1, A = 0;

int n, k, a[1000], ok;

void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		a[i] = 0;
	}
}
void sinh()
{
	int i = n;
	while(i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
bool check()
{
		if(a[1] == 0 || a[n] == 1) return false;
		for(int i = 1; i < n ; ++i)
		{
			if(a[i] == 1 && a[i + 1] == 1) return false;
		}
	return true;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		ok = 1;
		ktao();
		while(ok)
		{
			if(check())
			{
				for(int i = 1; i <= n; ++i)
				{
					if(a[i]) cout <<"H";
					else cout <<"A";
				}
			cout << endl;
			}
			sinh();
		}
	}
	return 0;
}
