#include<stdio.h>
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a>b && a>c)
		{
			if(b>c)
			printf("%d\n",b);
			else
			printf("%d\n",c);
		}
		if(b>a && b>c)
		{
			if(a>c)
			printf("%d\n",a);
			else
			printf("%d\n",c);
		}
		if(c>b && c>a)
		{
			if(b>a)
			printf("%d\n",b);
			else
			printf("%d\n",a);
		}
		t--;
	}
	return 0;
}
