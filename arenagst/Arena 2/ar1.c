#include<stdio.h>
int main()
{
	freopen("0100.in","r",stdin);
	freopen("0100.out","w",stdout);
	int t,i,a,b,c;
	scanf("%d",&t);
	i=1;
	while(t>0)
	{
	  scanf("%d %d %d",&a,&b,&c);
	  if((c-b)==(b-a))
	  {
	  	printf("Case #%d: YES\n",i);
	  }
	  else
	  {
	  	printf("Case #%d: NO\n",i);
	  }
	  i++;
	  t--;	
	}
	return 0;
}
