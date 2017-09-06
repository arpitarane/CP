#include<stdio.h>
int main()
{
	long long n,t,k,count;
	scanf("%lld %lld",&n,&k);
	while(n>0)
	{
		scanf("%lld",&t);
		if(t%k==0)
		{
			count++;
		}
		n--;	
	}
	printf("%lld\n",count);
	return 0;
}
