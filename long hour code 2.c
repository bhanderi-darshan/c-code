#include<stdio.h>
int main()
{

    int testcase;
    printf("enter testcase");
    sacnf("%d",&testcase);
   for (int c=1;c<=testcase;c++)
   {
       printf("enter no of day will run");
       int n;
       scanf("%d",&n);
       int A[n];
       int B[n];
int happy;

       for (int a=0,it =1;a<n;a++,it++)
       {printf("day %d",it );
           scanf("%d\t",&A[a]);

       }
        for (int a=0;a<n;a++)
       {
           scanf("%d\t",&B[a]);

       }
       for (int a=0,it=1;a<n;a++,it++)
        if(A[a]>(B[a])*2)
        {
            happy++;
        }
else if(B[a]>(A[a])*2)
{
    happy--;
}
for (int a=0;a<n;a++)
        if(A[a]==B[a])
        {
            happy++;
        }
printf("%d",happy);
}

}
