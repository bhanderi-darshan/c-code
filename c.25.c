#include<stdio.h>
main(){

int sumofdigit(int x){
int sum = 0;
for (int i = 0; x>0; i)
{
    sum+=x%10;
    x/=10;
}
printf("sum=%d",sum);


}



}
