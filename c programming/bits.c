#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(void){
    uint8_t reg=0b00000100;   
    reg = reg|1u<<3;
    printf("******************************\n");
    printf("%d",reg);
    printf("******************************\n");
    return 0;
}