#include<stdio.h>

int main(){
    int num,i;
    printf("\nEnter number");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("\n%d * %d = %d ",num,i,num*i);
    }

    return 0;
}

//num = 10 

//10 * 1 = 10 
//10 * 2 = 20
//......
//10 * 10 = 100 