#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;


void solve()
{
	string s;
	cin >> s;
	stack<int> st;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] =='(')
		{
			st.push(0);
		}
		if(s[i] =='H')
		{
			st.push(1);
		}
		if(s[i] =='C')
		{
			st.push(12);
		}
		if(s[i] == 'O')
		{
			st.push(16);
		}
		if(s[i] ==')')
		{
			int sum = 0;
			while(st.top() != 0)
			{
				sum += st.top();
				st.pop();
			}
			st.top() = sum;
			//st.push(sum);
			//cout << sum << " ";
		}
		if(isdigit(s[i]))
		{
			st.top() *= (s[i] - '0');
			//cout << st.top() << " ";
		}
	}
	int res = 0;
	while(!st.empty())
	{
		res += st.top();
		cout << st.top() << " ";
		st.pop();
	}
	cout << res << endl;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

