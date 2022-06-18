#include<bits/stdc++.h>

using namespace std;

int x[100],n,daxet[100];
void in()
{
	for(int i = 1; i <= n; ++i)
	{
		cout << x[i];
	}
}
void Try(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(daxet[j] == 0)
		{
			x[i] = j;
			daxet[j] = 1;
			if(i == n)
			{
				in();
				cout <<endl;
			}
			else Try(i + 1);
			daxet[j] = 0;
		}
	}
}
int main()
{
	cin >> n;
	Try(1);
}
