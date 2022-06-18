#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	int tmp = 0,ok = 0;
	map<int, int> mp;
	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		mp[x]++;
		if(mp[x] > (n / 2))
		{
			tmp = x;
			ok = 1;
		}
	}
	if(ok) cout << tmp;
	else cout << "khong co phan tu ap dao";
	return 0;
}

