#include<stdio.h>
float ferh(float fer);
int main(){
    float fer;
    printf("enter the value of Fahrenheit :");
    scanf("%f", &fer);
    printf("the conveted value of Fahrenheit to celcius is : %f", ferh(fer));

    return 0;
}
float ferh(float fer){
    int cel = (fer-32)/1.8;
    return cel;
}
