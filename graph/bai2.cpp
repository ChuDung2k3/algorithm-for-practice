#include<bits/stdc++.h>
#define ll long long
#define vii vector<pair<int, int>>
using namespace std;

int main()
{
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; ++i)
	{
		string s, tmp;
		getline(cin , s);
		stringstream ss(s);
		while(ss >> tmp)
		{
			if(i < stoi(tmp))
			{
				v.push_back({i, stoi(tmp)});
			}
		}
	}
	for(auto it : v)
	{
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
