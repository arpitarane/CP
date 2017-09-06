#include <iostream>
#include <algorithm>  //has the sort() function

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	// Now i can declare array of size n 
	int a[n]; // advantage of c++.....dynamic declaration
	for(int i = 0; i < n; i++)
	 scanf("%d", &a[i]);
	printf("Before Sorting Array: ");
	for(int i = 0; i < n; i++)
	 printf("%d ", a[i]);
	printf("\n");
	sort(a, a+n); // ascending
	sort(a, a+n, greater<int>()); // descending
	printf("After Sorting Array: ");
	for(int i = 0; i < n; i++)printf("%d ", a[i]);
	return 0;
}


*note: 1.sort() function is already available in algorithm.h header file
       2.ascending sorting:
       	 sort(a,a+n);
       	 here it sorts from(a+i) to (a+j):
			i) (a+0) to (a+n)...this means all elements
			ii) now consider (a+2) to (a+n)....this means it will keep first two elements untouched and then sort rest ascendingly till n.
			iii) now consider (a+2) to (a+n-2)...this means it will keep first two elements untouched,sort others ascendingly keeping last 2 untouched
			
	   3.descending sorting:
	   	 sort(a,a+n,greater<int>());
	   	 here it sorts in descending order:
	   	 	i) (a+0) to (a+n)...this means all elements
	   	 	ii)now consider (a+2) to (a+n)....this means it will keep first two elements untouched and then sort rest descendingly till n.
			iii) now consider (a+2) to (a+n-2)...this means it will keep first two elements untouched,sort others descendingly keeping last 2 untouched
			
