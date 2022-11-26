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
    vector<int> v;
    while(t--)
    {
    	string s; cin >> s;
    	if(s == "push")
    	{
    		int x; cin >> x;
    		v.pb(x);
		}
		else if(s == "pop")
		{
			if(!v.empty())
				v.pop_back();
		}
		else
		{
			if(v.empty()) cout << "EMPTY";
			else
			{
				for(int x : v)
				{
					cout << x << " ";
				}
			}
			cout << endl;
		}
	}
}

