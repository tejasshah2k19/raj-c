#include<stdio.h>

int main(){
    int choice,qty,bill;
    
    printf("\n1 For Vada  [15$]\n2 For Idali [20$]\n3 For Dosa  [30$]\n\nPlease Enter your choice");
    scanf("%d",&choice);

    printf("\nEnter Qty");
    scanf("%d",&qty);

    switch (choice)
    {
    case 1:
        bill = 15*qty;
        break;
        
    case 2:
        bill = 20*qty;
        break;
        
    case 3:
        bill = 30*qty;
        break;
        
    
    }

    printf("\nTotal bill = %d$",bill);

    return 0;
}