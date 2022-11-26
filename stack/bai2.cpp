#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    stack<int> st;
    while(t--)
    {
    	string s; cin >> s;
    	if(s == "push")
		{
			int x; cin >> x;
		 	st.push(x);
		}
		else if(s =="pop")
		{
			if(!st.empty())
			{
				st.pop();
			}
		}
		else if(s == "top")
		{
			if(!st.empty())
			 {
				cout << st.top() <<'\n';
			 }
			else
			{
				cout << "NONE\n";
			}
		}
		
	}
	return 0;
}

