#include<stdio.h>

int main(){
    int a[5]; //array of 5 integer 
    //a[0] a[1] a[2] a[3] a[4]
    
    printf("\nEnter 5 values");
    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    printf("\n5 Values are\n");
    printf("\n%d  %d  %d  %d  %d",a[0],a[1],a[2],a[3],a[4]);


    return 0;
}