#include<stdio.h>
#include<string.h>
int main()
{
     char a[30];
     char b[30];
     scanf("%s %s",a,b);
     int len=strlen(b);
     /*for(int i=0;i<= len;i++){
        a[i]=b[i];
     }*/

     strcpy(a,b);
     printf("%s",a);


}
