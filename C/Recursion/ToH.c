//Tower Of Hanoi
#include<stdio.h>
void main()
{
    int num;
    printf("\nEnter a Number: ");
    scanf("%d",&num);
    hanoi(num,'A','B','C');
    printf("\n\n");
}
void hanoi(int num,char f_peg,char t_peg,char a_peg)
{
    if(num==1)
    {
        printf("\nMove disk 1 from needle %c to %c",f_peg,t_peg);
        return;
    }
    hanoi(num-1,f_peg,a_peg,t_peg);
    printf("\nMove disk %d from needle %c to needle %c",num,f_peg,t_peg);
    hanoi(num-1,a_peg,t_peg,f_peg);
}
