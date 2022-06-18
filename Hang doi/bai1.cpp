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
	int n; cin >> n;
		queue<int> q;
	while(n--)
	{
		int t;
		cin >> t;
		if(t == 1)
		{
			cout << q.size() << endl;
		}
		else if(t == 2)
		{
			if(q.empty()) cout << "YES\n";
			else cout << "NO\n";
		}
		else if(t == 3)
		{
			int tmp; cin >> tmp;
			q.push(tmp);
		}
		else if(t == 4)
		{
			if(!q.empty())
			{
			q.front();
			q.pop();
			}
		}
		else if(t == 5)
		{
			if(!q.empty())
			{
				cout << q.front() << endl;
			}
			else cout << "-1\n";
		}
		else if(t == 6)
		{
			if(!q.empty())
			{
				cout << q.back() << endl;
			}
			else cout << "-1\n";
		}
		
	}
	return 0;
	
}
