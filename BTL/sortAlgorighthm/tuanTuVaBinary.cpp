#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void linearSearch(int a[], int n, int x)
{
	for(int i = 0; i < n; ++i)
	{
		if ( a[i] == x)
		{
			cout << "Vi tri can tim la :" << i + 1 <<'\n';
		}
	}
}

void bSearch(int a[], int n, int x)
{
	int l = 0, r= n - 1;
	int res = -1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			cout << "Vi tri can tim la: " << m + 1<<'\n';
			return;
		}
		else if (a[m] >= x)
		{
			r = m - 1;
		}
		else l = m+ 1;
	}
	cout << "Khong tim thay!!\n";
	return;
}
void bSearch2(int a[], int n, int l, int r, int x)
{
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		cout << "Vi tri can tim la: "<< m + 1 <<'\n';
		return;
	}
	else if(l > r) 
	{
		cout << "Khong tim thay\n";
		return ;
	}
	else if (a[m] >= x) bSearch2(a, n, l, m - 1, x);
	else bSearch2(a, n, m + 1, r, x);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
    	cin >> a[i];
	}
    sort(a, a + n);
	int x; cin >> x;
	bSearch(a, n, x);
	bSearch2(a, n, 0, n - 1, x);
}

