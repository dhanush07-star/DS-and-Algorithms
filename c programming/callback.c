#include<stdio.h>
void turn_on(void){
    printf("turning on!\n");
    return;
}

void turn_off(void){
    printf("turning off\n");
    return 0;
}

void toggle(void){
    printf("tuggleing\n");
}

int main(Void){
    void (*callbacks[3])(void)={
        turn_on,turn_off,toggle
    };

    int choice = 1;
    printf("**************************\n");
    callbacks[choice]();
    printf("**************************\n");
 
    return 0;   
}