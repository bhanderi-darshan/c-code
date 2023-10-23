#include<stdio.h>
main()
{
int a=10;
int b= 20;
int temp;
temp = a;
a= b;
b= temp;
printf("value of a:%d", a);
printf("value of b:%d", b);
}
