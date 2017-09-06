#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
//	freopen("500.in","r",stdin);
//	freopen("500.out","w",stdout);
	int t,i,j,n;
	int x=0;
	int sum;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&n);
		int boy[n];
		int girl[n];	
		x++;
		sum=0;
		for(i = 0; i < n; i++)
	    scanf("%d", &boy[i]);
	    for(j = 0; j < n; j++)
	    scanf("%d", &girl[j]);
	    sort(boy, boy+n);
		sort(girl,girl+n,greater<int>());
		for(i=0;i<n;i++)
		{
			sum+=boy[i]*girl[i];
	    }
		printf("Case #%d: %d\n",x,sum);
	    t--;
	}
	return 0;
}
