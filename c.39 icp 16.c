#include<stdio.h>
#include<math.h>
void main()
   {double d,x1,x2,y1,y2,sd;
   printf("enter the coordination obj1 in x and y axis : \n");
   scanf("%lf %lf", &x1,&y1);
   printf("enter the coordination obj2 in x and y axis : \n");
   scanf("%lf %lf", &x2,&y2);
   d=pow(x1-x2,2)+pow(y1-y2,2);
   sd=pow(d,0.5);
   printf("the distance between obj1 and obj2 is %lf\n",sd);




   }
