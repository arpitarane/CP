#include<stdio.h>
int main()
{
	int n,t,i,count;
	scanf("%d",&t);
	while(t>0)
	{
		count=0;
		scanf("%d",&n);
		for(i=2;i<=n/2;i++)
		{
		  if(n%i==0)
		  count++;
		  break;
	    }
	    if(count>0)
	    printf("no\n");
	    if(count==0)
	    printf("yes\n");
		t--;
	}
	return 0;
}
