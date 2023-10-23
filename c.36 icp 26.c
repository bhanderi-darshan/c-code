#include<stdio.h>
main (){

char v;

while(1){



scanf("%c", &v);
if (v=='$') return;
v = tolower(v);
switch(v)
{
 case 'a':
 printf("Vowel");
 break;

 case 'e':
 printf("Vowel");
 break;

 case 'i':
 printf("Vowel");
 break;

 case 'o':
 printf("Vowel");
 break;

 case 'u':
 printf("Vowel");
 break;


}
}
}
