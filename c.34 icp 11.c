#include<stdio.h>
void main(){
    float a,b,c;

    printf("Enter The Value Of a,b and c (c is for squre):\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("The area of circle with given optant is %f\n", 3.14*(a*b));
    printf("The area of squre with given optant is %f\n", (c*c));
    printf("The area of triange with given optant is %f\n", 0.5*(a*b));
    printf("The area of reactangle with given optant is %f\n", (a*b));
}
