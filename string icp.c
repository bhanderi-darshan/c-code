#include<stdio.h>
#include<string.h>

int main (){

char name[]="DarShaN";
for ( int i=0;i<strlen(name);i++){
if(name[i]>65 && name[i]<91)
{

    name[i]=name[i]+32;

}
else
{
    name[i]=name[i]-32;

}



}printf("%s",name);
}
