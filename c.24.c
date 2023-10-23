#include<stdio.h>
main(){

int arr[5]={1,2,3,4,5};
int i=0;
int sum =0;
while(i<5){

         sum = sum + arr[i];
         i++;
           }
        printf("sum = %d", sum);
}
