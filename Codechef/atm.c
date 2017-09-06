#include<stdio.h>
int main()
{
	 float y;
	 int x,a;
	 scanf("%d %f",&x,&y);
	 if((x%5==0) && (x+0.50<y))
	 {
	 	printf("%.2f\n",y-(x+0.50));
	 }
	 else if((x%5!=0) || (x+0.5>y))
	 {
	 	printf("%.2f\n",y);
	 }
	 return 0;
}


