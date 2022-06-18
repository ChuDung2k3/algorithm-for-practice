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
		--i;
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
}

// dung ham ktra() - ktra tra bit 1111 chu khong p bit 0000;
//int n, x[100];
//void ktao()
//{
//	for(int i = 1; i <= n; ++i)
//	{
//		x[i] = 0;
//	}
//}
//bool ktra()
//{
//	for(int i = 1; i <= n; ++i)
//	{
//		if(x[i] == 0) return false;
//	}
//	return true;// la ki tu cuoi cung
//}
//void sinh()
//{
//	int i = n;
//	while(i >= 1 && x[i] == 1)
//	{
//		x[i] = 0;
//		--i;
//	}
//	x[i] = 1;
//}
//int main()
//{
//	cin >> n;
//	ktao();
//	while(ktra() == false)
//	{
//		for(int i = 1; i<= n; ++i)
//		{
//			cout << x[i] << " ";
//		}
//		cout << endl;
//		sinh();
//	}
//	for(int i = 1; i <= n; ++i)
//	{
//		cout << x[i]<<" ";
//	}
//	return 0;
//}

