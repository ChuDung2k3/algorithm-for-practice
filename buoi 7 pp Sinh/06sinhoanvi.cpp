#include<bits/stdc++.h>

using namespace std;

int k, a[100], ok;
void ktao()
{
	for(int i = 1; i <= k; ++i)
	{
		a[i] = i;
	}
}
void sinh()
{
	int i = k - 1;
	while(i >= 1 && a[i] > a[i + 1]) --i;
	if(i == 0) ok = 0;
	else
	{
		int j = k;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		sort(a+ i +1, a + k + 1);
	}
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		cin >> k;
		ktao();
		ok = 1;
		while(ok)
		{
			for(int i = 1; i <= k; ++i)
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
