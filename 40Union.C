/*Demo of Union: Unions are special they allocate size of largest member 
and everyone shares that space.
*/
struct strtag
{
	char a;
	int b;
	float c;
};
union tag {
	char a;
	int b;
	float c;
};

main()
{
	union tag test;
	struct strtag teststruct;
	test.a=0;test.b=0; test.c=0;
	clrscr();
	printf("\nUnion Demo ");
	printUnion(test);
	test.a='A';
	printUnion(test);
	test.b = 275;
	printUnion(test);
	test.c=333333.55;
	printUnion(test);
	printf("\nSize of Union = %d . Size of structure = %d ",sizeof(test), sizeof(teststruct));
	getch();
}

printUnion(union tag t)
{
	printf("\nUnionContents: char=%c[%d] int=%d float=%f",t.a,t.a,t.b, t.c);
	getch();
}
