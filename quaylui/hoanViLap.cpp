#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int x[100];
string s;
bool used[100];
set<string> Set;
void in()
{
	string tmp = "";
	for(int i = 1; i <= s.size(); ++i)
	{
		tmp += s[x[i] - 1];
	}
	Set.insert(tmp);
}
void ql(int i)
{
	for(int j = 1; j <= s.size(); ++j)
	{
		if(used[j] == false)
		{
			x[i] = j;
			used[j] = true;
			if(i == s.size())
			{
				in();
			}
			else ql(i + 1);
			used[j] = false;
		}
	}
}
int main()
{
	cin >> s;

	ql(1);
	for(string x : Set)
	{
		cout << x << '\n';
	}
	return 0;
}

