#include<stdio.h>
int main()
{
	int t;
	float a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%f %f %f",&a,&b,&c);
		if(a+b+c==180)
		{
			if(a!=0 && b!=0 && c!=0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else 
		{
			printf("NO\n");
		}
		t--;
	}
	return 0;
}
