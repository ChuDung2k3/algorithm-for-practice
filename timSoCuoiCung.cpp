#include<bits/stdc++.h>

int p(int a, int b)
{
	a %= 10;
	int res = 1;
	while(b != 0)
	{
		if(b % 2 == 1)
		{
			res *= a;
			res %= 10;
		}
		b /= 2;
		a *= a;
		a %= 10;
	}
	return res;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", p(n, m));
	return 0;
}

