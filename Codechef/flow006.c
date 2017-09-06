#include<stdio.h>
int main()
{
	int t,n,m,sum;
	scanf("%d",&t);
	while(t>0)
	{
		sum=0;
		scanf("%d",&n);
		while(n>0)
		{
			m=n%10;
			sum=sum+m;
			n=n/10;
		}
		printf("%d\n",sum);
		t--;
	}
	return 0;
}
