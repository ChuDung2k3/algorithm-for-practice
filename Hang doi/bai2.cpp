#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int main()
{
	queue<string> q;
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		if(s.substr(0, 4) == "PUSH")
		{
			string tmp = s.substr(5);
			cout << tmp;
			q.push(tmp);
		}
		else if(s == "POP")
		{
			if(!q.empty()) q.pop();
		}
		else if(s == "PRINTFRONT")
		{
			if(!q.empty())
			{
				cout << q.front() << endl;
			}
			else cout <<"NONE\n";
		}
	}
}
