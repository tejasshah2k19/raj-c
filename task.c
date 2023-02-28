#include<stdio.h>

int main(){
    int age;
    int salary;
    
    printf("\nEnter age and salary : ");
    scanf("%d%d",&age,&salary); 

    if(age > 25 || salary > 50000 ){
        printf("\nYou Are Eligible...");
    }else{
        printf("\nYou are Not Eligible...");
    }
    return 0;
}


// if age > 25 then user is eligible for passport
// or salary is > 50000 then user is eligible for passport
// other wise not