/*Allocate memory at runtime, implementing the array functionality 
Array size is determined at time of writing of array, so one needs fair estimate of 
how many elements would be in an array. It can be either less allocation or 
over allocation.
but with dynamic allocation, we can ask user how many elements and then allocate exact
number of elements.
*/
#include "alloc.h"
main()
{
	int n,i,t;
	int *ptr;
	clrscr();
	printf("\nEnter how many elements : "); scanf("%d", &n);
	ptr = (int*) malloc( sizeof(int) * n);
	/*ask for memory. then cast the memory into integer type 
	and collect its starting address in ptr.
	ptr now apparently behaves like start of array. (but it is more flexible)
	*/
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d : ",i); scanf("%d", &t);
		*(ptr+i) = t; /* you can use scanf("%d", ptr+i); */
	}
	for(i=0;i<n;i++)
	{
		printf("\nElement A[%d] = %d : ",i, *(ptr+i) ); 
	}
	getch();
	free(ptr); /*always return memory to OperatingSystem*/
}