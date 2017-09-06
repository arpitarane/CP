#include<stdio.h>
int main()
{
	int t;
	long long n,i,fact,m=0,count=0;
	scanf("%d",&t);
	while(t>0)
	{
	   scanf("%lld",&n);
	   i=1,fact=1;
	   while(i<=n)
	   {
	   	 fact=fact*i;
	   	 i++;
	   }
	   while(fact>0)
	   {
	   	 m=fact%10;
	   	 if(m==0)
	   	 {
	   	  count++;
	     }
	     m=m/10;
	   }
	   printf("%lld\n",count);
	   t--;
	}
	return 0;
}
