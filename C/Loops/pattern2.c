//pattern2
#include<stdio.h>
int main() {
    int i, n,sp,j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(sp=0;sp<n-i;sp++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

