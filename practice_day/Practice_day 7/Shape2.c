//program to create a pyramid shape
#include<stdio.h>
int main()
{
    int line;
    scanf("%d",&line);
    int space=line-1,star=1;
    for(int i=1;i<=line;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        space--,star+=2;
        printf("\n");
    }
    return 0;

}
