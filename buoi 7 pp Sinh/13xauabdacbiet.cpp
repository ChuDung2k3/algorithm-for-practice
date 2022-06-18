#include<bits/stdc++.h>

using namespace std;

int n,k, a[100], ok;

void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		a[i]  = 0; 
	}
}
void sinh()
{
	int i = n;
	while(i>= 1 && a[i] == 1)
	{
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else
	{
		a[i] =  1;
	}
}
bool check()
{
	int dem = 0, res = 0;
	for(int i = 1; i<= n;++i)
	{
		if(a[i] == 0) ++dem;
		else dem = 0;
		if(dem > k) return false;
		else if(dem == k) ++res;
	}
	return res == 1;
}
int main()
{
	cin >> n >> k;
	vector<vector<int>>v;
	ok = 1;
	ktao();
	while(ok)
	{
		if(check())
		{
			vector<int> tmp(a + 1, a+ n + 1);
			v.push_back(tmp);
		}
		sinh();
	}
	cout << v.size() << endl;
	for(vector<int> it : v)
	{
		for(int x : it)
		{
			if(x == 1)cout << "B";
			else cout << "A";
		}
		cout << endl;
	}
	return 0;
}
