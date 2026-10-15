#include<stdio.h>
#include<stdlib.h>

int main(void){
    unsigned int num = 0x12345678;
    unsigned char* ptr= ( unsigned  char *) &num;
    printf("********************************\n");
    for(size_t i= 0 ; i < sizeof(num);i++){
        printf("%02X\n",ptr[i]);
    }
    printf("********************************\n");
    return 0;
}