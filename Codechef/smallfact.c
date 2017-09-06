#include<stdio.h>
int main()
{
	int t,n,i,fact;
	//long long fact;
	scanf("%d",&t);
	while(t>0)
	{
		fact=1;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("%d\n",fact);
		t--;
	}
	return 0;
}
