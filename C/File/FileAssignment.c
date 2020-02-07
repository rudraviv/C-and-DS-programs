/*Program to display C program files in current directory.The user should select one of the files.
Convert the file contents in capital and display the same on the screen.Also calculate total
character and lines.*/
#include<stdio.h>
#include<process.h>

void main()
{
    char f[30],ch;
    FILE *fp;
    int character,lines;
    system("dir *.c");

    printf("\n\nEnter a file name with extension:\n ");
    gets(f);
    fp=fopen(f,"r");
    printf("\nContents of files in Capital Letter:");
    while((ch=fgetc(fp))!=EOF)
    {
        character++;
        if(ch=='\n')
            lines++;
        printf("%c",toupper(ch));
    }
    printf("\n\nTotal Characters: %d",character);
    printf("\nTotal Lines: %d",lines);
}
