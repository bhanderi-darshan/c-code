#include<stdio.h>
void main(){
    float a;
    printf("enter the numbers of years to convert it into months and days : ");
    scanf("%f", &a);
    printf("the number of months in %f years is :%f\n",a,a*12);
     printf("the number of days in %f years is :%f\n",a,a*365);

}
