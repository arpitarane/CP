#include<stdio.h>
int main()
{
	int t,n,m,rev;
	scanf("%d",&t);  
	while(t>0)
	{ 
	    rev=0;
		scanf("%d",&n);
		while(n>0)
		{
			m=n%10;
			rev=(rev*10)+m;
			n=n/10;
		}
		printf("%d\n",rev);
		t--;
	}
	return 0;
}
