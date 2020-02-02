#include<stdio.h>
void main()
{
    FILE *fp;
    char str[5][100];
    int i;
    char c;
    fp=fopen("getc.txt","w+");
    printf("Enter text:");
    for(i=0;i<5;i++)
    {
            gets(str[i]);
            fprintf(fp,"%s\n",str[i]);
    }
    //Reading string using getc
    rewind(fp);

    printf("Contents of Files are:");
    while((c=getc(fp))!=EOF)
    {

        printf("%c",c);
    }
    fclose(fp);
}
