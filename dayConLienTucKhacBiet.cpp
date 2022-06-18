#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n; cin >> n;
	int t = 0; // Khoi tao cot moc ban dau
	int max = 0;
	map<int, int> mp;
	for(int i = 0; i < n ; ++i)// i bat dau tu chi so 0
	{
		int x;  cin >> x;
		if(mp[x] > t) t = mp[x]; // Neu x lap lai thi lay vi tri cua thk x cu so sanh voi cot moc
		if(max < i - t) max = i - t; // Cap nhat khoang cach tu i den vi tri danh dau
		mp[x] = i; // Cap nhat vi tri cua phan tu x
	}
	cout << max << endl;
	return 0;
}
//12
//4 7 2 8 4 8 3 2 4 9 3 6
