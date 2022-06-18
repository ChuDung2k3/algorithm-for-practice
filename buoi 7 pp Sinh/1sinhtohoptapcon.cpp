#include<bits/stdc++.h>

using namespace std;

int n, x[100], ok, k;
void ktao()
{
	for(int i = 1; i < k; ++i)
	{
		x[i] = i;//1234...k
	}
}
void sinh()
{
	int i = k;
	while(i >= 1 && x[i] == n - k + i)
	{
		--i;
	}
	if(i == 0) ok = false;//cau hinh cuoi cung;
	else
	{
		x[i]++;
		for(int j = i + 1; j <= k; ++j)
		{
			x[j] = x[j-1] + 1;
		}
	}
}
int main()
{
	cin >> n >> k;
	ktao();
	ok = true;
	while(ok)
	{
		for(int i = 1; i <= k; ++i)
		{
			cout << x[i] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}
