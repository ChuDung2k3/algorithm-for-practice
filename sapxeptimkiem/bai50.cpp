#include<bits/stdc++.h>

using namespace std;

int main()
{
	map<int, int>mp;
	int n; cin >> n;
	int a[n];
	for(int i = 0;i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	sort(a, a+ n);
	int min = a[0], max = a[n -1];
	if(max != min) cout << max - min <<" " <<1ll*mp[max] *mp[min];
	else cout << max - min <<" " << 1ll*(mp[max] - 1)*(mp[max])/2; 
}
