//program to count string by using recursion 79 85
#include<stdio.h>
#include<string.h>

int count(char*s,int i)
{
    if(i==-1)
    {
        return 0;
    }
    int cnt=count(s,i-1);
    {
        if(s[i]=='A'||s[i]=='A'+32||s[i]=='E'||s[i]=='E'+32||s[i]=='I'||s[i]=='I'+32||s[i]=='O'||s[i]=='O'+32||s[i]=='U'||s[i]=='U'+32)
        {
            return cnt+1;
        }
        else{
            return cnt;
        }

    }
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int counting=count(s,strlen(s)-1);
    printf("%d",counting);
    return 0;
}
