#include<stdio.h>
int main()
{
	int t,hard,ten;
	float cc;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %f %d",&hard,&cc,&ten);
		if(hard>50 && cc<0.7 && ten>5600)
		printf("10\n");
		if(hard>50 && cc<0.7 && ten<=5600)
		printf("9\n");
		if(hard<=50 && cc<0.7 && ten>5600)
		printf("8\n");
		if(hard>50 && cc>=0.7 && ten>5600)
		printf("7\n");
		if((hard>50 && (cc>=0.7 && ten<=5600)) || (cc<0.7 && (hard<=50 && ten<=5600)) || (ten>5600 && (cc>=0.7 && hard<=50)))
		printf("6\n");
		if(hard<=50 && cc>=0.7 && ten<=5600)
		printf("5\n");
	}
	return 0;
}
