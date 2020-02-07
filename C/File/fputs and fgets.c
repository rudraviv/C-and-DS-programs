//Program for fgets and fputs
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int i;
    char text[100];
    fp=fopen("fputs and fgets.txt","w+");
    if(fp==NULL)
    {
        printf("Cant open");
    }
    else
    {
        printf("\nEnter text here:");
        scanf("%s",text);
        fputs(text,fp);
    }
     rewind(fp);
    if(fgets(text,100,fp)!=NULL)
    {
        while(text[i]!='\0')
        {
            printf("%c",text[i]);
            i++;
        }
    }
    else{
        printf("File is Empty");
    }
    fclose(fp);
}
