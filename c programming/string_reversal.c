#include<stdio.h>
#include<string.h>

int main(){

    char s[] = "Hello, World!";
    int last_idx=strlen(s)-1;
    printf("*****************************\n");
    while(last_idx>=0){
        printf("%c",s[last_idx]);
        last_idx--;
    }
    printf("\n");
    printf("*****************************\n");
    return 0;
}