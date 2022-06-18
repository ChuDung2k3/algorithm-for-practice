#include<bits/stdc++.h>

using namespace std;
//
//int n, ok, a[100];
//
//void ktao()
//{
//	for(int i = 1; i <= n; ++i)
//	{
//		a[i] = n - i + 1;
//	}
//}
//void sinh()
//{
//	int i = n - 1;
//	while(i >= 1 && a[i] < a[i + 1]) --i;
//	if(i == 0) ok = 0;
//	else
//	{
//		int j = n;
//		while(a[i] < a[j]) --j;
//		swap(a[i], a[j]);
//		sort(a +  i + 1,a+ n +1 );
//	}
//}
//int main()
//{
//	int t; cin >> t;
//	while(t--)
//	{
//		cin >> n;
//		ok = 1;
//		ktao();
//		while(ok)
//		{
//			for(int i = 1; i <= n; ++i)
//			{
//				cout <<a[i];
//			}
//			cout << " ";
//			sinh();
//		}
//		cout << endl;
//	}
//	return 0;
//}
// dung ham co san --> ngu hoc
int n, a[1000];
int main()
{
	int t; cin >>t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i<= n; ++i)
		{
			a[i] = n + 1 - i;
		}
		do
		{
			for(int i = 1; i <= n; ++i)
			{
				cout << a[i];
			}
			cout <<" ";
		}while(prev_permutation(a + 1, a + n + 1));
		cout <<endl;
	}
}
