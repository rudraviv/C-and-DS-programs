#include<stdio.h>
void main()
{
    FILE *fp;
    char s1[15],s2[15];

    fp=fopen("fprintf.txt","r");
    fscanf(fp,"%s %s",s1,s2);
    printf("%s %s",s1,s2);
}
