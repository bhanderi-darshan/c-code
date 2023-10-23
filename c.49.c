#include<stdio.h>
void main(){
    int x;
    int a;
    scanf("%d", &a);
    x=sum(a);
    printf("%d",x);
}

  int sum(int n)
  {

    if (n==0 || n==1) return 1;

    return (sum (n-1) +sum(n - 2));
}

