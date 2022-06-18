#include<bits/stdc++.h>

using namespace std;

int n, k, s, cnt, x[100], sum = 0;
void test(int i)
{
	for(int j = x[i - 1] + 1; j <= n - k + i; ++j)
	{
		x[i] = j;
		sum += x[i];
		if(i == k)
		{
			if(sum == s) ++cnt;
			
		}
		else test(i + 1);
		sum -= x[i];
	}
}
int main()
{
	while(1)
	{
		cin >> n >> k>> s;
		memset(x, 0 ,sizeof(x));
		sum = 0,cnt = 0;
		if(n + k + s == 0) break;
		else 
		{
			test(1);
			cout << cnt << endl;
		}
	}
	return 0;
}

