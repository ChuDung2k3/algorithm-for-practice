#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin>> n;
		int tmp = 0, tmp2 = 0;
		int k = n /7;
		for(int i = k; i >= 0; --i)
		{
			if((n - (7 *i ))% 4 == 0)
			{
				tmp2 = i;
				tmp = (n - (7 * i))/4;
				break;
			}
		}
		if(tmp == 0 || tmp2 == 0) cout << "-1\n";
		else
		{
			for(int i = 0; i < tmp; ++i) cout << "4";
			for(int i = 0; i < tmp2; ++i) cout <<"7";
		}
	}
	return 0;
}
