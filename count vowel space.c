#include<stdio.h>
main (){
 int v=0;
 int c=0;
 int s=0;
char str[]="aeid ijsis  i";
  int n=strlen(str);
  for(int i=0;i<=n-1;i++)
  {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||   str[i]=='o' || str[i]=='u' )
      {
          v++;
      }

      else if(str[i]==' ')

      {
          s++;

      }
      else {
        c++;
      }
  }

printf("%d %d %d", v,c,s);
}

