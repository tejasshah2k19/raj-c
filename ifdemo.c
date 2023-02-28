#include<stdio.h>
//number is positive or negative 
int main(){
    int a;

    printf("\nEnter number");
    scanf("%d",&a);

    if(a > 0){
        printf("\nNumber is positive");
    }

    if(a < 0){
        printf("\nNumer is Negative");
    }
    return 0;
}