#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
map<int, int> mp; // luu vi tri so lan xuat hien cua 'X'
int main()
{
	string s; cin >> s;
	int mx = 0, cnt = 0; // cnt: tinh so lan lap cua 'X', gap 'D' thi tru
	mp[0] = 0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] == 'X') cnt++;
		else cnt--;
		if(mp.find(cnt) == mp.end()) mp[cnt] = i + 1; // Luu lai so lan lap lai
		else mx = max(mx, i + 1 - mp[cnt]); // Neu da xuat hien bien cnt thi tru di so lan xuat hien do -> so kitu bang nhau;
		
	}
	cout << mx;
	return 0;
	
	
	
}

