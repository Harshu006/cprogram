/*Pointers Introduction
pointer is a variable which stores address of another variable.
pointers are classified according to what type of data value they point at, so we have 
int pointer     --> looking at an integer 
char pointer    --> looking at a  char
float pointer   --> looking at a float 

we have two operators (UNARY OPERATORS)
& -> ADDRESS OF   [remember scanf("%d", &num) ]
* -> VALUE AT     [a*b multiplication is two value operator. Here * is a UNARY operator.]

Addresses in memory are labelled as integers. they are special integers, and are only positive 
and by nature they are UNSIGNED. Unsigned integers are worked with format code %u
*/

main()
{
  int a=50;  /*a regular integer*/
  int *p;    /*p is a pointer which can point to integer. A is an integer pointer. */
  p = &a;    /*collect the address of a into p */
 
  clrscr();
  printf("\n[Regular variable usage]: A = %d ",a) ;
  printf("\n[Addresses view]: A is located at = %u ", &a) ;
  printf("\n[Value via & * operator]: A = %d ",  *(&a) );
  getch();
  
  printf("\n[Pointer ] P is located at = %u", &p);
  printf("\n[Pointer contents ] P is looking at = %u", p);
  printf("\n[Pointer value extraction(dereferencing)] P is looking at value = %d", *p);
  getch();
  printf("\nchanging values of a to 55 regularly");
  a = 55; /*changing values of a regularly */
  printf("\n[Regular variable usage]: A = %d ",a) ;
  getch();
  printf("\nchanging values of a to 57 via pointers");
  *p = 57; /*change value via pointers */
  printf("\n[Pointer value extraction(dereferencing)] P is looking at value = %d", *p);  
  getch();
  
}