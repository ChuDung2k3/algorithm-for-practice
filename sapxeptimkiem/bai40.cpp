#include<bits./stdc++.h>

using namespace std;

int cnt[100000]= {0};
int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(cnt, 0, sizeof(cnt));
		int n; cin >> n;
		int a[n];
		for(int &x: a)
		{
			cin >> x;
			++cnt[x];
		}
		bool ok = false;
		for(int x : a) 
		{
			if(cnt[x] > 1)
			{
				ok = true;
				cout << x << endl;
				break;
			}
		}
		if(!ok) cout<< "-1\n";
	}
	return 0;
}
