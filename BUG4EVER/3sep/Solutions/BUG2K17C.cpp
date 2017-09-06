#include <iostream>

using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) 
	{
		int n;
		cin >> n;
		char s[n];
		scanf("%s", s);
		int x;
		cin >> x;
		long long ans = x;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(s[i] == '+')ans += x;
			if(s[i] == '-')ans -= x;
		}
		
			cout << ans << endl;
		
	}
	return 0;
} 