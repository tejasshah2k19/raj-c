#include<stdio.h>

int main(){
    int a[5]; // a[0]  a[1]..... a[4]
    int i,ans;

    for(i=0;i<5;i++){// 0 1 2 3 4 
       scanf("%d",&a[i]);
    }

    //3rd value 
    printf("\n%d",a[2]);

    //addition of 1 and last
    ans = a[0]+a[4]; 
    printf("\n%d + %d  = %d",a[0],a[4],ans);

    printf("\nArray Data \n");
    for(i=0;i<5;i++){// 0 1 2 3 4 
        printf(" %d",a[i]);
    }


    printf("\nArray Data In Reverse\n");
    for(i=4;i>=0;i--){// 0 1 2 3 4 
        printf(" %d",a[i]);
    }


    return 0;
}