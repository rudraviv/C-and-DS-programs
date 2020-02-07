#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int i=0,sb=0,b=0,c=0;
    fp=fopen("fgetc.c","r");//Reading this c File as a File for results
    if(fp==NULL)
    {
        printf("Cant open file");
    }
    while((ch=fgetc(fp))!=EOF)
    {
        switch(ch)
        {
        case ';':
            c++;
            break;
        case '{':
            sb++;
            break;
        case '(':
            b++;
            break;
        case '#':
            i++;
            break;
        }
    }
    fclose(fp);
    printf("\n*****Summary of C program*********");
    printf("\nTotal Statements: %d",c+i);
    printf("\nInclude Statements: %d",i);
    printf("\nTotal Blocks{}: %d",sb);
    printf("\nTotal Brackets(): %d\n\n",b);
}
