#include<stdio.h>
main(){
char str[10];
int i;
int num =0;
int sum =0;
while(1){
      printf("enter the number \n");
      gets(str);
      i=0;
      if((str[0]=='N')&& (str[1]== '0'))return;

      while(str[i]){
      num += str[i]-48;
      num *=10;
      i++;
}
      num/=10;
      printf("num = %d\n", num);
      sum += num;
      pritnf("the sum is %d\n", sum);
      num=0;


}
}
