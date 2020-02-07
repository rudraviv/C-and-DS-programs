//pattern printing using recursion
#include<stdio.h>

int s;
void show(void);
void main()
{

    if(s==10)
        exit(0);
    show();
}
void show()
{
    int j;
    for(j=0;j<=s;j++)
        printf("%d",j);
    printf("\n");
    s++;
    main();
}
