

int t,n,a[15];
char s[100];


int check()
{
    int i,j,b[100],c=0,d[15],sum;
    for(i=2;i<=n;++i)
	{
        for(j=0;j<=9;++j) d[j]=0;
        for(j=n-1;j>=0;--j)// Nhan
		{
            sum=(s[j]-'0')*i+c;
            b[j] = sum%10;
            
			d[b[j]]++;// dem kitu
            
            c=sum/10;
        }
        if (c>0) d[c]++;
        for(j=0;j<=9;++j)
        {
        	
        	if (a[j]!=d[j]) return 0;//142857 × 2 = 285714
		}
    }
    return 1;
}

int main(){
    scanf("%d",&t);
    while(t--)
	{
        scanf("%s",&s);
        n=strlen(s);
        for(int i=0;i<=9;++i) a[i]=0;
        for(int i=0;i<n;++i) a[s[i]-'0']++;// dem ki tu;
        if(check()) printf("YES");
		else printf("NO"); 
    }
}
