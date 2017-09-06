#include <iostream>
#include<string>

using namespace std;
int main()
{

	int t,time;
    int dest_startHOUR, dest_startMIN;
    int dest_endHOUR, dest_endMIN;
    int home_startHOUR, home_startMIN;
    char c={':'};
    char s ={' '};
	scanf("%d",&t);
	while(t>0)
	{
		cin >>dest_startHOUR>>c>>dest_startMIN>>s>>dest_endHOUR>>c>>dest_endMIN>>s>>home_startHOUR>>c>>home_startMIN;
		time=dest_endMIN-home_startMIN;
		cout <<time;
	    t--;
	}
	return 0;
}
