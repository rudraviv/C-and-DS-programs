#include<stdio.h>
void main()
{
    FILE *fp;
    int n,ch;
    char txt[100],c;
    fp=fopen("fseek.txt","w+");
    printf("Enter Contents to the file(* to exit):\n");
    while((c=getchar())!='*')
    {
        fputc(c,fp);
    }
    printf("\n\nContents of files are:\n");
    rewind(fp);
     while(!feof(fp))
    {
         c=fgetc(fp);
        printf("%c",c);
    }

    printf("\nHow many characters including spaces would you like to skip?: ");
    fflush(stdin);
    scanf("%d",&n);
    fseek(fp,n,SEEK_SET);

    printf("\nInformation after skipping:\n ");
    while(!feof(fp))
    {
         c=fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
}
