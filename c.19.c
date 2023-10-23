#include<stdio.h>
main()
{
int main()
{
 int i,j;
 setxy(5,0);
 printf("Set Your Game Logic in following Area.") ;

 //Top border line...
 setxy(10,5);
 for(j=0; j<20; j++)
  printf("%c", 223);

 //Bottom border line...
 setxy(10,15);
 for(j=0; j<=20; j++)
  printf("%c", 223);

 //Left and Right border line...
 for(j=0; j<10; j++)
 {
  setxy(10,5+j);
  printf("%c",219);

  setxy(30,5+j);
  printf("%c",219);
 }
 printf("\n");
 return 0;

}

}







