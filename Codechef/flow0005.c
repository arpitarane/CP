#include<stdio.h>
int main()
{
	 int t,n,count;
	 scanf("%d",&t);
	 while(t>0)
	 {
	 	scanf("%d",&n);
	 	count=0;
	 	while(n>0)
		{
	 	  count+=n/100;
	 	  n=n%100;
	 	  count+=n/50;
	 	  n=n%50;
	 	  count+=n/10;
	 	  n=n%10;
	 	  count+=n/5;
	 	  n=n%5;
	 	  count+=n/2;
	 	  n=n%2;
		  count+=n/1;
	 	  n=n%1;	
		}
		printf("%d\n",count);
		 t--;
	 }
	 return 0;
}
