#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=10;i++){
        if(i%2==0  ){
            printf("   -%d",i);
        }else{
            printf("   %d",i);
        }
    }    
    return 0;
}



//1 -2  3   -4  5   -6  7   -8  9   -10
//
//if num % 2 == 0 -> even 


//1 2 2 3 4 4 5 6 6 7 8 8 9 10 10