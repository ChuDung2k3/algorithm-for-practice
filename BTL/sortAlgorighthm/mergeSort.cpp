#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void merge(int a[], int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	
	while(i < x.size() && j < y.size())
	{
		if (x[i] <= y[j])
		{
			a[l] = x[i];
			++l;
			++i;
		}
		else
		{
			a[l] = y[j];
			++l; ++j;
		}
	}
	while(i < x.size())
	{
		a[l] = x[i];
		++l;++i;
	}
	while(i < y.size())
	{
		a[l] = y[j];
		++l;++j;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l >= r) return;
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, m, r);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x: a) cin >> x;
    mergeSort(a, 0, n - 1);
    for(int x : a) cout <<x <<" ";
    return 0;
}

