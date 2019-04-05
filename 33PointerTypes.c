/*Different pointer types */
main()
{
  int i;
  int *iptr;
  float f;
  float *fptr;
  char c;
  char *cptr;
  
  clrscr();
  printf("\nDifferent Pointer Types");
  /*uncommnet following lines to see compiler warning [SUSPICIOUS POINTER CONVERSION]. A specific datatype pointer 
  cannot look at a different datatype value */
  /* 
  iptr = &b;
  fptr = &a;
  cptr = &a;
  */
  iptr = &i;
  fptr = &f;
  cptr = &c;
  
  *iptr = 78;
  *fptr = 55.43;
  *cptr = 'Z';
  
  printf("\n int = %d float = %f char = %c ",i,f,c);
  getch();
  
  
}