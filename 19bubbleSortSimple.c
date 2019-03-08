/*Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.
*/
main()
{
  int a[10], p,c,i, temp;
  clrscr();
  printf("\nBubble Sort");
  printf("\nEnter 10 numbers: ");
  for(i=0;i<10;i++)
  {
     printf("\nEnter number %d: ",i+1);
     scanf("%d", &a[i]);
  }
  for(p=0;p<10;p++)
  {
    clrscr();
    printf("\nArray: ");for(i=0;i<10;i++) printf(" [%d] ",a[i]);
    for(c=0;c<10-p-1;c++)
    {

      if(a[c]>a[c+1])
      {
	printf("\nPass=%d, Cycle=%d: interchanging %d and %d",
					      p,c,a[c],a[c+1]);
	temp = a[c];
	a[c] = a[c+1];
	a[c+1] = temp;
      }
      else
      {
	printf("\nPass=%d, Cycle=%d: no interchange required",p,c);
      }
    }
    printf("\nPass %d completed... Press any key to continue",p);
    getch();
  }
  printf("\nSorted numbers are:\n ");
  for(i=0;i<10;i++)
  {
    printf("\nA[%d] = %d ",i,a[i]);
  }
  getch();
}
