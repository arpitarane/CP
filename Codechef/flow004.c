#include<stdio.h>
int main()
{
	 int t,n,m;
	 scanf("%d",&t);
	 while(t>0)
	 {
	 	scanf("%d",&n);
	 		m=n%10;
	 		while(n>9)
	 		{
	 		n=n/10;
	 	    }
	 	    printf("%d\n",m+n);
	 	t--;
	 }
	 return 0;
}
