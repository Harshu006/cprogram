/*Writing binary files - storing integer and floats in a file.
Note the file contents are not human readable, as values written are not in ASCII text.
*/

#include <stdio.h>

main()
{
	int a=4;
	float b=25;
	int fileint;
	float filefl;
	FILE *fpw;
	FILE *fpr;
	fpw = fopen("flintfl.txt","wb"); /*open file for writing. erase contents if any*/
	if(fpw == NULL)
	{
		printf("\nError: Unable to open file for writing ");
		getch();
		return;
	}
	fwrite(&a,sizeof(int),1,fpw);
	fwrite(&b,sizeof(float),1,fpw);
	printf("\n%d %f are written in binary file flintfl.txt");
	fclose(fpw);
	fpr = fopen("flintfl.txt","rb"); /*open file for reading as binary */
	if(fpr == NULL)
	{
		printf("\nError: Unable to open file flintfl.txt for reading ");
		getch();
		return;
	}
	fread(&fileint,sizeof(int),1,fpr);
	fread(&filefl,sizeof(float),1,fpr);
	printf("\nFrom file: int=%d float=%f",fileint,filefl);
	getch();
	fclose(fpr);
}