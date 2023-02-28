#include<stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int i;
    if(a % b == 0){
        printf("\nDivisible");
    }else{
        printf("\nNot Divisible");
    }

    for(i=1;i<=10;i++){
        if( a % i ==  0 ){
            printf("\n %d Divisible",i);
        }
    }

    return 0;

}

//10 
//1 2 3 4 5 6 7 8 9 10 

