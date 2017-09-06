#include<stdio.h>
int main()
{
	int t,sal;
	float sumsal;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&sal);
		if(sal<1500)
		{
			sumsal=0;
			sumsal=sal+(0.1*sal)+(0.9*sal);
			printf("%g\n",sumsal);
		}
		else
		{
			sumsal=0;
			sumsal=sal+(0.98*sal)+500;
			printf("%g\n",sumsal);
		}
		t--;
	}
	return 0;
}
