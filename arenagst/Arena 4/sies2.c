#include<stdio.h>
int main()
{
    freopen("200.in","r",stdin);
    freopen("200.out","w",stdout);
    int t,i=0;
	long long total,aib,tvf,a,m;
	scanf("%d",&t);
	while(t>0)
	{
		i++;
		scanf("%lld %lld %lld",&total,&aib,&tvf);
		m=aib+tvf;
		if(m>=total)
		{
			a=m-total;
		}
		if(m<total)
		{
			a=total-m;
		}
		printf("Case #%d: %lld\n",i,a);
		t--;
	}
	
	return 0;
}
