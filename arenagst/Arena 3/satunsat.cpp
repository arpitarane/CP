#include<iostream>
int main()
{
    freopen("arr.in","r",stdin);
    freopen("arr.out","w",stdout);
	int j,i,a=0,t,n,m;
	long long width,sat,unsat;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%lld %d",&width,&n);
		long long array[n];
		m=n;
		sat=0;
		unsat=0;
		a++;
		i=0;
		while(n>0)
		{
			scanf("%lld",&array[i]);
			i++;
		    n--;
		}
		for(j=0;j<m;j++)
		{
			if((width-5)<=array[j] && array[j]<=(width+5))
			{
				sat++;
			}
			else
			{ 
			   unsat++;
		    }
		}
		printf("Case #%d: %lld %lld\n",a,sat,unsat);
		t--;
	}
	
	return 0;
}
