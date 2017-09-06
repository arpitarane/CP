#include<stdio.h>
int main()
{
	int t,n,fact,i;
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
