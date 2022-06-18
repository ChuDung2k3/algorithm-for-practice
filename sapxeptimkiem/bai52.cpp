#include<bits/stdc++.h>

using namespace std;

int main()
{
	set<int>se;
	int n; cin >> n;
	for(int i = 0; i < n ;++i)
	{
		int x;
		cin >> x;
		se.insert(x);
	}
	cout <<se.size() << endl;
	return 0;
}
