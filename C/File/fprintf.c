#include<stdio.h>

void main()
{
    FILE *fp;
    char txt[30];
    fp=fopen("fprintf.txt","w");
    printf("Enter a Text to Write in File:");
    gets(txt);
    fprintf(fp,"%s",txt);
    fclose(fp);
}
