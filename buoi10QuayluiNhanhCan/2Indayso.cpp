#include<bits/stdc++.h>

using namespace std;

int n, x[100];
void test(int i)
{
	if(i == 0) return ;
	cout <<"[";
	for(int j= 1; j <= i; ++j)
	{
		cout << x[j];
		if(i == j) cout<< "]\n";
		else cout <<" ";
	}
	for (int j = 1;j < i; ++j)
	{
		x[j] += x[j + 1];
	}
	test(i - 1);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; ++i)
		{
			cin >> x[i];
		}
		test(n);
	}
}
