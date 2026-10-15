#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("************************************\n");
    char *s = "Hello hi world!";
    //printf("%zu\n",strlen(s));
    //printf("%d\n",strlen(s));
    printf("%d\n",strlen("abcd"));
    int x = printf("%s\n","abcd");
    printf("%d\n",x);
    printf("************************************\n");
    return 0;
}
