//Program to write block of structure element to the given file using fwrite() function.
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int rollno;
    char name[20];
    int age;
    char address[20];
}student;
student info[10];
void main()
{
    int n,i,j=0;
    FILE *fp;
    fp=fopen("FileStruct1.txt","w+");
    if(fp==NULL)
    {
        printf("File Doesn't exist ");
    }
    else
    {
        printf("How many records you want to insert: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\nRoll No: ");
            scanf("%d",&info[i].rollno);
            printf("\nName: ");
            scanf("%s",info[i].name);
            printf("\nAge: ");
            scanf("%d",&info[i].age);
            printf("\nAddress: ");
            scanf("%s",info[i].address);
        }
        while(j<n)
        {
            fwrite(&info,sizeof(info),1,fp);
            j++;
        }
        j=0;
        rewind(fp);
         while(j<n)
        {
            fread(&info,sizeof(info),1,fp);
            j++;
        }
        printf("\n************Entered Information***********");
        printf("\n\nRoll No\t Name\t Age\t Address\n");
        for(i=0;i<n;i++)
        {
            printf("  %d\t",info[i].rollno);
            printf("%s\t",info[i].name);
            printf("%d\t",info[i].age);
            printf("%s\t\n",info[i].address);
        }
        fclose(fp);
    }
}
