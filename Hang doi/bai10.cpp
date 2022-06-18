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

vector<string> v;
void init()
{
	queue<string> q;
	q.push("6");
	q.push("8");
	while(1)
	{
		string tmp = q.front(); q.pop();
		if(tmp.size() == 19 ) break;
		v.pb(tmp);
		q.push(tmp +"6");
		q.push(tmp + "8");
	}
}
int main()
{
	int t; cin >> t;
	
	init();
	while(t--)
	{
		
		int n; cin >> n;
		vector<string> tmp;
		for(string x : v)
		{
			if(x.size() > n) break;
			else
			{
				tmp.pb(x);
			}
		}
		cout << tmp.size() << endl;
		for(int i = tmp.size() - 1 ; i >= 0; --i)
		{
			cout << tmp[i] << " ";
		}
		cout << endl;
	}
}
