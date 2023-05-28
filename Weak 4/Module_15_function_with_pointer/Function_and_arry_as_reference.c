#include<stdio.h>
void reference(int ar[])
{
    ar[2]=300;
}
void string(char *str)
{
    str[2]='m';//or *str+2='m'
}
int main()
{
    int arr[5]={10,20,30,40,50};

    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //now it print dereferencing array.
    reference(arr);
    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    char s[20]="siri";
    printf("\n%s",s);

    string(s);
    //Now it print dereferencing string.
    printf("\n%s",s);
    return 0;
}
