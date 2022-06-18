#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define ll long long
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

bool cmp(pi a, pi b)
{
	if(a. fi == b.fi)
	{
		return a.se < b.se;
	}
	else return a.fi < b.fi;
}
int main()
{
	vii v;
	int n; cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; ++i)
	{
		string s, num;
		getline(cin , s);
		stringstream ss(s);
		while(ss >> num)
		{
			v.pb({i, stoi(num)});
		}
	}
	sort(v.begin(), v.end(),cmp);
	for(auto it : v)
	{
		cout << it.fi << " " << it.se << endl;
	}
	return 0;
}
