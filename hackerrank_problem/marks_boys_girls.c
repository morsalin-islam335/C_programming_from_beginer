#include<stdio.h>
char call(char s)
{
    if(s=='g')
    {
        return 'g';
    }
    else{
        return 'b';
    }
}
int main()
{
    char s;
    scanf("%c",&s);
    char j=call(s);
    printf("%c",j);
    return 0;
}
