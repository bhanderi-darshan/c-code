#include<stdio.h>
#include<string.h>

int main (){

char name[]="DarShaN";
int n=strlen(name);

for ( int i=0;i<n;i++){
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
