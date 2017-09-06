#include<stdio.h>
int main()
{
	int n,k,t,i,max,ans;
	scanf("%d",&t);
	while(t>0)
	{
		max=0;
		scanf("%d %d",&n,&k);
		for(i=1;i<=k;i++)
		{
		  ans=n%i;
		  if(ans>max)
		  max=ans;
	    }
	    printf("%d\n",max);
		t--;
	}
	return 0;
}
