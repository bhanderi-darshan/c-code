#include<stdio.H>
void main()
{
    int a;
    int x;
   scanf("%d", &a);
    x= sum(a);
    printf("%d", x);

}
 int sum(int n)   {
        if (n==0 )return  0 ;
        return (n+ sum(n-1));
    }



