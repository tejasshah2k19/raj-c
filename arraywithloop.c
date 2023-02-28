#include<stdio.h>

int main(){
    int a[500];
    int i;

    printf("\nEnter 5 values");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);//a[i] => a[0] a[1] a[2] a[3] a[4]
    }

    printf("\nValues in Array\n");
    for(i=0;i<5;i++){
         printf("\n%d",a[i]);
    }

    return 0;
}