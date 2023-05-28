#include<stdio.h>
int main()
{
    char A[11];
    char B[11];

    scanf("%s %s",A,B);

    int len1=strlen(A),len2=strlen(B);
    printf("%d %d\n",len1,len2);
    printf("%s%s\n",A,B);
    char tmp=A[0];
    A[0]=B[0];
    B[0]=tmp;

    printf("%s %s",A,B);

    return 0;
}
