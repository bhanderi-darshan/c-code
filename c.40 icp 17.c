#include<stdio.h>
void main()
   {
    int a;
    printf("enter the to show its leap year or not :\n");
    scanf("%d",&a);
    if(a%400==0){
        printf("the enter year is a leap year\n");
    }
    else if(a%4==0){
         printf("the enter year is a leap year\n");
    }
    else{printf("the enter year is not a leap year\n");}



   }
