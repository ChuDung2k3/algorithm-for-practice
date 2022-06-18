#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
string s;
bool solve()
{
	cin >> s;
	map<char, int> mp;
	stack<char> st;
	for(char x : s)
	{
		if(x == '{')
		{
			if(mp['['] || mp['(']) return false;
			mp[x]++;
			st.push(x);
		}
		else if(x =='[')
		{
			if(mp['(']) return false;
			mp[x]++;
			st.push(x);
		}
		else if(x == '(')
		{
			mp[x]++;
			st.push(x);
		}
		else if(x == ')')
		{
			mp['(']--;
			if(mp['('] < 0) return false;
		}
		else if(x == '}')
		{
			mp['{']--;
			if(mp['{'] < 0) return false;
		}
		else if(x == ']')
		{
			mp['[']--;
			if(mp['['] < 0) return false;
		}
	}
	for(char x : s)
	{
		if(mp[x]) return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	if(solve()) cout << "Dung\n";
    	else cout <<"Sai\n";
	}
	return 0;
}

