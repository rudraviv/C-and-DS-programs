//program for putc
#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("putc.txt","w+");
    printf("Enter sentences to write in file(Enter * to Exit):\n");
    while((c=getchar())!='*')
    {
        putc(c,fp);
    }
    rewind(fp);
    printf("\nReading contents of file:\n");
    while(!feof(fp))
    {
         c=getc(fp);
        printf("%c",c);
    }
    fclose(fp);

}
