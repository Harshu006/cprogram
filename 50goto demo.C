/* goto statement demo:
C supports a unique form of a statement that is the goto Statement which is used to branch unconditionally within a program from one point to another. Although it is not a good habit to use the goto statement in C
The goto statement gives power to jump to any part of program but, makes the logic of the program complex and tangled.
In modern programming, goto statement is considered a harmful construct and a bad programming practice.
The goto statement can be replaced in most C programs with the use of break and continue statements.
*/
main()
{
  int a,b,c;
  clrscr();
  printf("\ngoto statement demo");
  printf("\nEnter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
    goto aislarge;

  if(b>c)
    goto bislarge;

  goto cislargest;

  aislarge:
  if(a>c)
     goto aislargest;

  goto cislargest;

  bislarge:
  if(b>c)
    goto bislargest;

  goto cislargest;

  aislargest:
    printf("\nA(%d) is largest ",a);
    goto end;

  bislargest:
    printf("\nB(%d) is largest",b);
    goto end;

  cislargest:
    printf("\nC(%d) is largest",c);
    goto end;
  end:
    getch();
}
/*
  compare above program with
  if(a>b)
    if(a>c)
      printf("\nA%d is largest",a);
    else
      printf("\nC%d is largest",c);
  else
    if(b>c)
      printf("\nB%d is largest",b);
    else
      printf("\nC%d is largest",c);

*/