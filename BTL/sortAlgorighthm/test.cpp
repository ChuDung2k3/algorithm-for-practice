#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int tmp = i;
		for(int j = i + 1; j < n; ++j)
		{
			if(a[tmp] > a[j])
			{
				tmp = j;
			}
		}
		swap(a[tmp], a[i]);
	}
}

void insertionSort(int a[], int n)
{
	for(int i = 1; i < n; ++i)
	{
		int pos = i - 1, x = a[i];
		while(pos >= 0 && x < a[pos] )
		{
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}
void bbSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for(int j = 0; j < n - i - 1; ++j)
		{
			if(a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
//	selectionSort(a, n);
//	insertionSort(a, n);
	bbSort(a, n);
	for(int i = 0; i < n; ++i) cout << a[i] <<" ";
	return 0;
}

