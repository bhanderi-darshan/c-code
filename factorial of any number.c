#include<stdio.h>
void main(){

int a=4;
int x;
x=fact(a);
printf("%d", x);
}

int fact(int n)
{ int t;
    if (n==0)
    {
        return 1;
    }
    t=n*fact(n-1);
    return t;


}
