 #include<stdio.h>
void main()
   {
    float a,gross,net,TA,DA,HRA,TAX,PF;
   printf("enter your basic salary to know your gross salary :");
   scanf("%f", &a);
   TA=a*5/100;
   DA=a*64/100;
   HRA=a*12/100;
   gross=a+TA+DA+HRA;
   TAX=gross*3/100;
   PF=gross*12/100;
   net=gross-TAX-PF;
   printf("your gross salary is : %f\n", gross);
   printf("your net salary is : %f\n", net);
   }

