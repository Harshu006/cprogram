#include <stdio.h>
/*requires input.txt in program folder containing numbers*/
main()
{
	FILE *fp;
	char name[100];
	int num,sum=0;
	printf("\nThis program finds sum of integers read from file ");
	printf("\nEnter filename with full path: "); gets(name);
	fp = fopen(name,"r");
	if(NULL == fp)
	{
		printf("\nError: Cannot open %s. Check filename and path",name);
		return;
	}
	else
	{

		while(!feof(fp))
		{
			num=0;
			fscanf(fp,"%d", &num);
			sum+=num;
			printf("%d + ",num);
		}
	}
	printf(" = %d ",sum);
	getch();
	fclose(fp);
}

/*
Create a text file using notepad with numbers written like following. Provide the filename as input for gets(name) statement
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
*/