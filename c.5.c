#include<stdio.h>
int main()
{
    int a;
    int dec=0;
    int dig;
    int j=1;
    int rem;
    scanf("%d", &a);
    while(a>0)
    {
        rem=a%10;
        dig=rem*j;
        dec=dec+dig;
        j=j*2;
        a=a/10;
    }
    printf("%d", dec);
}
                       