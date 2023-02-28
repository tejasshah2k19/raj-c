#include<stdio.h>
#include<string.h>


int main(){
    char email[30],password[30];

    printf("\nEnter email and password");
    scanf("%s%s",&email,&password);

    // strcmp -> compare two string and return 0

    if(strcmp(email,"raj@gmail.com") == 0 ){
        printf("\nEmail is Correct");
    } else{
        printf("\nInvalid Email");
    }
    if(strcmp(password,"secret") == 0 ) {
        printf("\nPassword is Correct");
    }else{
        printf("\nInvalid Password");
    }

    return 0;
}