#include<stdio.h>

int main(){
    int a,b;
    int ans; 
    int choice;

    printf("\nPress 1 For Addition");
    printf("\nPress 2 For subtraction");
    printf("\nPress 3 For Multiplication");
    printf("\nEnter choice");
    scanf("%d",&choice);//2

    switch(choice){
        case 1:
            printf("\nEnter two numbers");
            scanf("%d%d",&a,&b);
            ans = a+b ;
            printf("\nAdd = %d",ans);
            break;

        case 2:
            printf("\nEnter two numbers");
            scanf("%d%d",&a,&b);
            ans = a-b ;
            printf("\nSub = %d",ans);
            break;

        case 3:
            printf("\nEnter two numbers");
            scanf("%d%d",&a,&b);
            ans = a*b;
            printf("\nMultiplication = %d",ans);
            break;
                   
    }

    return 0;
}