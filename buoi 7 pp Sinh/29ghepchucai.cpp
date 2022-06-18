#include<bits/stdc++.h>

using namespace std;

char c;
bool vowel(char c)
{
	return c== 'A'|| c == 'E';
}
bool check(string s)
{
	for(int i = 1; i < s.size() - 1; ++i)
	{
		if(vowel(s[i]) && !vowel(s[i - 1]) && !vowel(s[i + 1])) return false;
	}
	return true;
}
int main()
{
	char a[100];
	cin >> c;
	string s = "";
	int n = c - 'A' + 1;
	for(int i = 1; i <= n; ++i)
	{
		s += 'A' + i - 1;
	}
	do
	{
		if(check(s)) cout << s << endl;
	}while(next_permutation(s.begin(), s.end()));
	return 0;
}
