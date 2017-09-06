#include<stdio.h>
int main()
{
	int t,quan,price;
	double ans;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d",&quan,&price);
		if(quan<=1000)
		{
			printf("%lf\n",quan*price);
		}
		else if(quan>1000)
		{   
		    ans=quan*price; 
		    ans -= ans*0.1; 
			printf("%lf\n",ans);
		}
		t--;
	}
	return 0;
}
