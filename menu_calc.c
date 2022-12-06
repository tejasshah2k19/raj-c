#include<stdio.h>

int main(){

    int a,b,ans;
    int choice;

    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);

    printf("\n1 For Add");
    printf("\n2 For Sub");
    printf("\n3 For Mul");
 
    printf("\nEnter your choice");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            ans = a +b;
            printf("\nadd = %d",ans);
        case 2:
            ans = a- b;
            printf("\nsub = %d",ans);
        case 3:
            ans = a *b;
            printf("\nmul = %d",ans);
    }
    return 0;
}