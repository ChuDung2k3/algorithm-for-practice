#include<bits/stdc++.h>

using namespace std;


bool vowel(char c)
{
	return (c == 'A' || c == 'E');
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
	char kt;
	cin >> kt;
	string s = "";
	for(char i = 'A'; i <= kt; ++i)
	{
		s+= i;
	}
	do
	{
		if(check(s))
		{
			cout << s;
			cout << endl;
		}
		
	}while(next_permutation(begin(s), end(s)));
	return 0;
}
