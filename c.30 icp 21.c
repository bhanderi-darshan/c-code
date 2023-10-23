#include<stdio.h>
main()
{
     float per;
scanf("%f", &per);

     if(per>70&&per<80){printf("And your grade is A-\n");}
    else if(per>60&&per<70){printf("And your grade is B+\n");}
    else if(per>50&&per<60){printf("And your grade is B-\n");}
    else if(per>40&&per<50){printf("And your grade is C\n");}
    else{printf("You are failed\n");}
printf("your all over percentage is %f \n",per);

   }
