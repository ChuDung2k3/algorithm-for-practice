#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void heapify(int a[], int n, int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int larg = i;
	if ( l < n  && a[l] > a[larg]) larg = l;
	if (r < n && a[r] > a[larg]) larg = r;
	if (larg != i)
	{
		swap(a[i], a[larg]);
		heapify(a, n, larg);
	}
}

void heapSort(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; --i)
	{
		heapify(a, n, i);
	}
	
	for(int i = n - 1; i >= 0; --i)
	{
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    heapSort(a, n);
    for(int x : a) cout << x << " ";
    return 0;
}

