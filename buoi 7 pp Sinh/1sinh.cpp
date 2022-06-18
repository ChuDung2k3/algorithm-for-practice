#include<bits/stdc++.h>

using namespace std;

int n, x[100], ok;

void ktao()
{
	// cau hinh dau tien deu la cac bit = 0
	for(int i = 1; i <= n; ++i)
	{
		x[i] = 0;
	}
}
void sinh()
{
	// bat dau tu bit cuoi cung trong cau hinh
	//di tim bit dau tien = 0 tinh tu ben phai
	int i = n;
	while(i >= 1 && x[i] == 1)
	{
		x[i] = 0;
		--i
	}
	if(i == 0) ok = false;
	else x[i] = 1;
}
int main()
{
	cin >> n;
	ktao();
	ok = true;
	while(ok)
	{
		for(int i = 1; i <= n; ++i)
		{
			cout << x[i] << " ";
		}
		cout << endl;
		sinh();
	}
	for(int i = 1; i <= n; ++i)
	{
		cout << x[i];
	}
	return 0;
}

