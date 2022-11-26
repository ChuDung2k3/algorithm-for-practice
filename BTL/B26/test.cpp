#include<bits/stdc++.h>

using namespace std;
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
bool checkAns[4];

void in()
{
	memset(checkAns, 0, 4);
	for(int i = 0; i < 4;++i)
	{
		int tmp = random(0, 3);
		if(checkAns[tmp] == 0)
		{
			cout << tmp <<'\n';
			checkAns[tmp] = 1;
		}
		else
		{
			while(checkAns[tmp])
			{
				tmp = random(0, 3);
			}
			cout << tmp <<'\n';
			checkAns[tmp] = 1;
		}
	}
}
int main()
{
	for(int i = 0; i < 4; ++i)
	{
		in();
		cout <<"\n-----------\n";
	}
}
