#include <stdio.h>
int main()
{
    int a[5], i,sum = 0;
    printf("\nEnter five numbers");
    for (i = 0; i <= 4; i++)
    {
        // 0 1 2 3 4
        scanf("%d", &a[i]); // a[0] a[1] a[2] a[3] a[4]
    }
    printf("\nARray Content\n");
    for (i = 0; i <= 4; i++)
    {
        printf(" %d", a[i]); // a[0] a[1] a[2] a[3] a[4]
        sum = sum + a[i];
    }
    printf("\nSum = %d",sum);

    return 0;
}