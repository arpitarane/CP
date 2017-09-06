#include<stdio.h>
int main()
{
	freopen("0200.in","r",stdin);
	freopen("0200.out","w",stdout);
	int t,i;
	float a,b,c;
	scanf("%d",&t);
	i=1;
	while(t>0)
	{
		scanf("%f %f %f",&a,&b,&c);
		if(a+b+c==180)
		{
			if(a!=0 && b!=0 && c!=0)
			{
				printf("Case #%d: YES\n",i);
			}
			else
			{
				printf("Case #%d: NO\n",i);
			}
		}
		else 
		{
			printf("Case #%d: NO\n",i);
		}
		i++;
		t--;
	}
	return 0;
}
