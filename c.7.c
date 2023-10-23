#include<stdio.h>
int main()
{
    int a;
    int dec=1;
    int dig;
    int rem;
    int j=1;
    scanf("%d", a);
    while(a>0)
    {
        rem=a%10;
        dig=rem*j;
        dec=dig+dec;
        j=j*2;
        a=a/10;

        }
        printf("%d", dec);


}


