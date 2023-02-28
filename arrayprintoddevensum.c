#include<stdio.h>

int main(){
    int a[5];
    int i; 
    int oddSum=0,evenSum=0;

    printf("\nEnter 5 numbers");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++){
        if( a[i] % 2 == 0 ){
            evenSum = evenSum + a[i];
        }else{
            oddSum = oddSum + a[i];
        }
    }

    printf("\nOdd Sum = %d ",oddSum);
    printf("\nEven Sum = %d ",evenSum);
    
    return 0;
}


//take 5 numbers in array 
//sum -> odd / even 
