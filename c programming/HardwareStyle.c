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
}HardwareDevice;


int main(void){

    HardwareDevice device ={
        .temperature = 25.0,
        .voltage = 3.3,
        .state = DEVICE_ON,
        .flag = true
    };
    printf("*********************************************\n");
    printf("Device State: %d\n", device.state);
    printf("Temperature: %.2f\n", device.temperature);
    printf("Voltage: %.2f\n", device.voltage);
    printf("Flag: %s\n", device.flag ? "true" : "false");
    printf("*********************************************\n");

    return 0;
}