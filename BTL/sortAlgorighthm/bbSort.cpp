#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void bbSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if ( a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x: a) cin >> x;
    bbSort(a, n);
    for (int x : a) cout << x <<' ';
	return 0; 
}

