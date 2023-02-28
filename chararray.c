#include<stdio.h>
#include<string.h>

int main(){
    char c;// 'x' 'p' 'A'
    //string - word 
    char name[25];

    printf("\nenter name");
    scanf("%s",&name);

    printf("\nName = %s",name);
    //convert name in upper case 

    strupr(name);// convert your string in upper case 
    printf("\nName = %s",name);

    // strlwr(name) // this will converty your string in lower case 

    //india
    printf("\ntotal characters = %d",strlen(name));


       
    return 0;
}