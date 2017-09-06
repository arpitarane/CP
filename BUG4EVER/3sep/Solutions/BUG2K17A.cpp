#include <iostream>

using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) 
	{
		int h1,m1,h2,m2,h3,m3;
		scanf("%d:%d %d:%d %d:%d", &h1, &m1, &h2, &m2, &h3, &m3);
		cout<<m2-m3<<endl;
	}
	return 0;
} 