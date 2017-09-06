#include<stdio.h>
int main()
{
    freopen("100.in","r",stdin);
    freopen("100.out","w",stdout);
    int t,i=0;
	long long m,n;
    scanf("%d",&t);
    while(t>0)
    {
    	i++;
    	scanf("%lld",&n);
    	m=n/2;
    	printf("Case #%d: %lld\n",i,n+m);
    	t--;
	}
	
	return 0;
}
