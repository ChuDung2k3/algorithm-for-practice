#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define ll long long

struct sinhVien
{
	char ten[1000], ns[1000];
	float a, b, c;
};
typedef struct sinhVien sinhVien;

int main()
{
	int n; scanf("%d", &n);
	getchar();
	sinhVien arr[n];
	float max = 0;
	for(int i = 0; i < n; ++i)
	{
		gets(arr[i].ten);
		gets(arr[i].ns);
		scanf("%f%f%f", &arr[i].a, &arr[i].b, &arr[i].c);
		getchar();
		float tong = arr[i].a + arr[i].b + arr[i].c;  
		if(tong > max) max = tong;
	}
	for(int i = 0; i < n; ++i)
	{
		if(max == arr[i].a + arr[i].b+ arr[i].c)
		{
			printf("%d %s %s %.1f\n", i + 1, arr[i].ten, arr[i].ns, max);
		}
	}
}
