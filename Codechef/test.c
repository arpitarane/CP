// this is basic template for any contest
#include <stdio.h>
#include <string.h>

int main()
{
	int q, t, a, b;
	scanf("%d", &t);
	for(q = 1; q <= t; q++){
		scanf("%d %d", &a, &b);
		printf("%d\n", a%b);
	}
	return 0;
}



