#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&n);
		if(n<10)
		{
		 printf("What an obedient servant you are!\n");
	    }
		else if(n>=10)
		{
		 printf("-1\n");
	    }
		 t--;
	}
	return 0;
}
