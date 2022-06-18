#include<bits/stdc++.h>

using namespace std;

char c;
int k, ok;
char a[100];
void ktao()
{
	for(int i = 1; i <= k;++i)
	{
		a[i] = 'A';
	}
}
void sinh()
{
	int i = k;
	while(i >= 0  && a[i] == c) --i;
	if(i == 0) ok = 0;
	else
	{
		++a[i];
		for(int j = i + 1; j <= k; ++j)
		{
			a[j] = a[i];
		}
	}
}
int main()
{
	cin >> c >> k;
	ok  = 1;
	ktao();
	while(ok)
	{
		for(int i = 1; i<= k; ++i)
		{
			cout << a[i];
		}
		sinh();
		cout << endl;
	}
	return 0;
}
