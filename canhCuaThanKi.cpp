#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int d = 1, tmp = 5;
		
			while(n > tmp)
			{
				n -= tmp;
				tmp *= 2;
				d *= 2;
				
			}
		int t = n;
		n = n / d;
		if( t % d) n += 1;
		//cout << n << " "<< d << endl;
		if(n== 1) cout << "dangdungcntt\n";
		else if(n == 2) cout << "tienquanutc\n";
		else if(n == 3) cout << "quang123\n";
		else if(n == 4) cout << "maianh\n";
		else if(n == 5) cout << "nguyenminhduc2820\n";
	}
	return 0;
}

