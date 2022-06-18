#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<int> st;
		for(int i = 0; i < s.size(); ++i)
		{
			if(isdigit(s[i]))
			{
				st.push(s[i] - '0');
			}
			else
			{
				int o1 = st.top(); st.pop();
				int o2 = st.top(); st.pop();
				int res;
				if(s[i] == '+') res = o1 + o2;
				else if(s[i] == '-') res = o2 - o1;
				else if(s[i] == '*') res = o2 * o1;
				else if(s[i] == '/') res = o2 / o1;
				st.push(res);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}
