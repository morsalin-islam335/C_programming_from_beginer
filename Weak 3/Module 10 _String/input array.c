//program to string operation.
/*
#include<stdio.h>
int main()
{
    char name[8];
    for(int i=0;i<8;i++){
        scanf("%c",&name[i]);

    }
    for(int i=0;i<7;i++){
        printf("%c",name[i]);
    }
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char n[15];
    gets(n);

    //printf("%s",n);
    int i=0;
    for(int j=0;n[j]!='\0';j++){
        i++;
    }
    printf("%d",i);

    int k=0;
    int j=0;
    while(n[j]!='\0'){
        k++;
        j++;
    }
    printf("\n%d\n",k);
    printf("\n%c",n[3]);

    printf("\n%d",strlen(n));

    char a='1';
    printf("\n%d",a);

    return 0;
}
