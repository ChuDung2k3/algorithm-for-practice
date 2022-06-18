#include<bits/stdc++.h>

using namespace std;

int n, x[100], cot[100], d1[100], d2[100], cnt;
void test(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(cot[j] == 0 && d1[i - j + n]== 0 && d2[i + j - 1] == 0)
		{
			x[i] = j;
			cot[j] = d1[i - j + n] = d2[i + j -1] = 1;
			if(i == n)
			{
				++cnt;
			}
			else test(i + 1);
			cot[j] = 0;
			d1[i - j + n] = 0;
			d2[i + j - 1] = 0;
		}
	}
}
int main()
{
	cin >> n;
	d1[n] = 2;
	d2[n] = 2;
	test(1);
	cout<< cnt;
	
}
