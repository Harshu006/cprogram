/* Program to find second largest number */
main()
{
   int a,b,c,d,e, big,big2;
   clrscr();
   printf("\nThis program finds largest and second largest of five given numbers.");
   printf("\nEnter five numbers: ");
   printf("\nEnter a: ");  scanf("%d", a);
   printf("\nEnter b: ");  scanf("%d", b);
   printf("\nEnter c: ");  scanf("%d", c);
   printf("\nEnter d: ");  scanf("%d", d);
   printf("\nEnter e: ");  scanf("%d", e);
   big = a; /*1st number is unconditionally largest.*/
   if(b>big) big = b;
   if(c>big) big = c;
   if(d>big) big = d;
   if(e>big) big = e;
   /*Now largest is stored in big.
   to find second largest, we repeat the process on four numbers excluding big
   
   To do this efficiently, we create a function which finds largest amongst 4 numbers.
   */
   if(a == big) big2 = largestof4(b,c,d,e);
   if(b == big) big2 = largestof4(a,c,d,e);
   if(c == big) big2 = largestof4(a,b,d,e);
   if(d == big) big2 = largestof4(a,b,c,e);
   if(e == big) big2 = largestof4(b,c,d,a);
   printf("\nLargest = %d Second Largest = %d",big,big2);
   getch();
}
int largestof4(int p, int q, int r, int s)
{
	int large;
	large = p; 
	if(q > large) large = q;
	if(r > large) large = r;
	if(s > large) large = s;
	return large;
}