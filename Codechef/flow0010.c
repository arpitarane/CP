#include <stdio.h>
#include <string.h>
int main()
{
	int i,t;
	scanf("%d", &t);
	for(i=0;i<2*t;i++)
	{
	  char a;
	  scanf("%c",&a); 
	  if(a=='b' || a=='B')
	  printf("BattleShip\n");
	  if(a=='c' || a=='C') 
	  printf("Cruiser\n");
	  if(a=='d' || a=='D')
	  printf("Destroyer\n");
	  if(a=='f' || a=='F')
	  printf("Frigate\n");
    }
    return 0;
}



