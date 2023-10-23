#include<stdio.h>
int main()
{

 int a;
 printf("eneter the value of row \n");
 scanf("%d",&a);
 while(a<=10)
{
    a++;

    for(int j=0;j<a;j=j+1)
    {
        printf("=");
    }
    printf("\n");

}
}








