#include<bits/stdc++.h>

using namespace std;

int x[100],n,daxet[100];
	int cnt = 0;
void in()
{
//	for(int i = 2; i <= n; ++i)
//	{
//		if((x[i] + x[ i - 1 ]) % 4 == 0) return;
//	}
	for(int i = 1; i <= n; ++i)
	{
		cout << x[i] << " ";
	}

}
void Try(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(daxet[j] == 0 &&( (x[i - 1] + j ) % 4 != 0 || (i == 1 && (x[i - 1] + j) % 4 == 0)))
		{
			x[i] = j;
			daxet[j] = 1;
			if(i == n)
			{
				++cnt;
				in();
				cout<< endl;
			}
			else Try(i + 1);
			daxet[j] = 0;
		}
	}
}
int main()
{
	x[0] = 0;
	cin >> n;
	Try(1);
	cout << cnt << endl;
}
