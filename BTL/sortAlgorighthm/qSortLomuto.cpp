#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int partition(int a[], int l, int r)
{
	int tmp = a[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; ++j)
	{
		if (a[j] <= tmp )
		{
			++i;
			swap(a[j], a[i]);
		}
	}
	++i;
	swap(a[i], a[r]);
	return i;
}
void qSort(int a[], int l, int r)
{
	if (l >= r) return;
	int p = partition(a, l, r);
	qSort(a, l, p - 1);
	qSort(a, p + 1, r);
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
	qSort(a, 0, n - 1);
	for (int x : a)
	{
		cout << x << " ";
	}
	return 0;
}

