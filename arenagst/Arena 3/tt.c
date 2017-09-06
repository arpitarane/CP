#include<stdio.h>
int main()
{
    freopen("100.in","r",stdin);
    freopen("100.out","w",stdout);
	int t,i=0;
	long long n,m,rev,s;
	scanf("%d",&t);  
	while(t>0)
	{ 
	    rev=0;
		scanf("%lld",&n);
		s=n;
		i++;
		while(n>0)
		{
			m=n%10;
			rev=(rev*10)+m;
			n=n/10;
		}
		if(rev>s)
		printf("Case #%d: %lld\n",i,rev);
		if(rev<=s)
		printf("Case #%d: %lld\n",i,s);
		t--;
	}
	
	return 0;
}
