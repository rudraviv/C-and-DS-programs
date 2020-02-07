//Program for Structure Within Structure.
#include<stdio.h>
void main()
{
    struct time
    {
        int second;
        int minute;
        int hour;
    };
    struct t
    {
        int carno;
        struct time st;
        struct time rt;
    };
    struct t r1;

    printf("\nCar Number\tStarting Point\tReaching point");
    scanf("%d",&r1.carno);
    scanf("%d %d %d",&r1.st.hour,&r1.st.minute,&r1.st.second);
    scanf("%d %d %d",&r1.rt.hour,&r1.rt.minute,&r1.rt.second);
    printf("\nEntered Information");
    printf("\nCar Number\tStarting Point\tReaching point");
    printf("%d\t",r1.carno);
    printf("%d\t%d\t%d\t",r1.st.hour,r1.st.minute,r1.st.second);
    printf("%d\t%d\t%d",r1.rt.hour,r1.rt.minute,r1.rt.second);
}
