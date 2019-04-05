/*Pointer usage: 
out of many usage scenarios of pointers, one of the most common usage is
returning multiple values from a function.
recall that scanf() updates values from with the parameter, not as a return value.
ie. 
num = scanf() is not used.
scanf("%d", &num) is used.

*/

main()
{
	int radius;
	float area,perimeter;
	clrscr();
	printf("\nEnter radius of circle: ");
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter); /*radius->call by value . Rest others are call by reference */
	printf("\n Radius = %d",radius);
	printf("\n Area = %f",area);
	printf("\n Perimeter = %f",perimeter);
	getch();
 }
 
 int areaperi(int r, float *a, float *p)
 {
	float pi;
	pi = 22.0/7.0;
	*a = pi * r * r;
	*p = 2 * pi * r;
	/*note that this function returns nothing via return
	it simply modifies a and p addresses.*/
 }