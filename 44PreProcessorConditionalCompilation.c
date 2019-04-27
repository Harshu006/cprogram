/*Preprocessor Directives (Conditional Compilation): #if, #ifdef, #ifndef, #else, #elif, #endif, defined 
Conditional Compilation is a feature in C Programming where you can maintain different versions of code.
In the following code: The first printf() is only compiled when there is a constant DEBUG defined (with any value)

If you remove #define DEBUG 1 line, the program only compiles with printf("\nHello World");

*/

#define DEBUG 1
main()
{
	clrscr();
	#ifdef DEBUG
	printf("\nThis is compiled when DEBUG is defined ");
	#endif
	printf("\nHello World");
	getch();
}

/* 
Output : 
[when #define DEBUG 1 exists in code]

This is compiled when DEBUG is defined
Hello World

[when #define DEBUG 1 is removed from code & code is recompiled]

Hello World