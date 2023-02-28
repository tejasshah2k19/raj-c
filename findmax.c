#include<stdio.h>

int main(){
    int a,b;

    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);

    if( a > b ){
        printf("\na is max");
    }

    if(b > a){
        printf("\nb is max");
    }
    return 0;
} 