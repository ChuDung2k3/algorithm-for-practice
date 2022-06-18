#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve()
{
	string s; getline(cin, s);
	stack<string> st;
	stringstream ss(s);
	string tmp = "";
	while(ss >> tmp)
	{
		st.push(tmp);
	}
	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}
int main()
{
	solve();
	return 0;
}

