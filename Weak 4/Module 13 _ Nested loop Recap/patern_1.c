//program to create  an amazing pattern.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count1=1,space1=(n-1);

    int count2=(2*n)-1,space2=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<space1;j++){
            printf(" ");
        }
        for(int j=0;j<count1;j++){
            printf("*");
        }

    count1+=2;
    space1--;
    printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<count2;j++){
            printf("*");

        }
        printf("\n");
        for(int j=0;j<space2;j++){
            printf("*");
        }
        space2++,count2-=2;
    }




    return 0;

}
