#include<stdio.h>
#include<stdbool.h>

typedef enum {
    DEVICE_ON,
    DEVICE_OFF,
    DEVICE_ERROR
}DeviceState;

typedef struct{
    float temperature;
    float voltage;  
    DeviceState state;
    bool flag;
}Device;


int main(void){

    


    return 0;
}