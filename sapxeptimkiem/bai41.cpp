#include<bits/stdc++.h>

using namespace std;

bool prime[1000001];
void sang()
{
	memset(prime, 1, sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i = 1; i <= sqrt(1000000); ++i)
	{
		if(prime[i])
		{
			for(int j = i*i; j <= 1000000; j +=i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	sang();
	int t; cin >> t;
	while(t--)
	{
		bool ok = false;
		int n; cin>> n;
		for(int i = 2; i <= n/2; ++i)
		{
			if(prime[i] && prime[n - i])
			{
				ok = true;
				cout << i <<" "<< n- i << endl;
				break;
			}
		}
		if(ok== false) cout <<"-1\n";
	}
	return 0;
}
