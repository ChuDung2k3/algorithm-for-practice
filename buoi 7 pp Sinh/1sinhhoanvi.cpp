#include<bits/stdc++.h>

using namespace std;

int n, a[100],ok;

void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		a[i] = i;
	}
}
void sinh()
{
	//bat dau tu vi tri khac vi tri cuoi cung
	//chung nao a[i] > a[i+1]
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1])
	{
		--i;
	}
	if(i == 0) ok = false;
	else
	{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}
int main()
{
	cin >> n;
	ktao();
	ok = true;
	while(ok)
	{
		for(int i  = 1; i <= n; ++i )
		{
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}
