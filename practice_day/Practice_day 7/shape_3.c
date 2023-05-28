//program to create a diamond shape

#include<stdio.h>
int main()
{
    int line;
    scanf("%d",&line);
    int star1=1,star2=(line*2)-1;
    int space1=line-1,space2=1;

    for(int i=1;i<=line;i++){
        for(int j=1;j<=space1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star1;j++)
        {
            printf("*");
        }
        printf("\n");
        star1+=2,space1--;
    }

    for(int i=1;i<=line;i++){
        for(int j=1;j<=star2;j++)
        {
            printf("*");
        }
        printf("\n");
        for(int j=1;j<=space2;j++)
        {
            printf(" ");
        }
        star2-=2,space2++;
    }
    return 0;
}
