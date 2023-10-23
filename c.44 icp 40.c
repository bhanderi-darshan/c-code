#include<stdio.h>
#include<math.h>
double factorial(int n);


void main(void){
{
    int X, N, i= 1 ,f=1;
    double sum=0, fact=1;

    printf("\nenter X\n"); scanf("%d",&X);
    printf("\nenter N\n"); scanf("%d",&N);

    while(i<=N)
    {
        sum=sum+(f*X);
        fact= factorial(i);
        sum= sum/ fact;
        X*=X*X;
        f*=-1;
        i=i+2;

    }
printf("%2f",sum);
return;

}

double factorial(int n)
{
    int i =1;
    int ans = 1;
    while(i<=n);
    ans*=i;
    i++;
}


}
