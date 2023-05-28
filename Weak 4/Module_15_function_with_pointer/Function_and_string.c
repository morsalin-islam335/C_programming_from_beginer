#include<stdio.h>
#include<string.h>

void fun(char *arr)
{
    printf("%d\n",strlen(arr));
    for(int i=0;i<strlen(arr) ;i++)
    {
        printf("%c",arr[i]);
    }
}
int main()
{
    char s[20]={"hello"};
    fun(s);
    return 0;
}
