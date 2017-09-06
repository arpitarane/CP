#include<stdio.h>
int main()
{
    freopen("500.in","r",stdin);
    freopen("500.out","w",stdout);
    int t,i=0;
    long long n,e,x,y,a,b;
    scanf("%d",&t);
    while(t>0)
    {
    	i++;
    	a=0;
    	scanf("%lld %lld",&n,&e);
    	b=e;
    	while(e>0)
    	{
    		scanf("%lld %lld",&x,&y);
			e--;
		}
		a=b-(n-1);
		printf("Case #%d: %lld\n",i,a);
		t--;
	}
	return 0;
}
