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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	deque<string> q;
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		if(s.substr(0, 9) == "PUSHFRONT")
		{
			string tmp = s.substr(10);
			q.push_front(tmp);
		}
		else if(s.substr(0, 10) == "PRINTFRONT")
		{
			if(!q.empty())
			{
				cout << q.front() <<endl;
			}
			else cout << "NONE\n";
		}
		else if(s.substr(0, 8) == "POPFRONT")
		{
			if(!q.empty())
			{
				q.pop_front();
			}
		}
		else if(s.substr(0, 8) == "PUSHBACK")
		{
			string tmp = s.substr(9);
			q.push_back(tmp);
		}
		else if(s.substr(0, 9) == "PRINTBACK")
		{
			if(!q.empty())
			{
				
			cout << q.back() << endl;
			}
			else
			{
				cout << "NONE\n";
			}
		}
		else if(s.substr(0, 7) == "POPBACK")
		{
			if(!q.empty())
			{
				q.pop_back();
			}
		}
		
	}
	return 0;
}
