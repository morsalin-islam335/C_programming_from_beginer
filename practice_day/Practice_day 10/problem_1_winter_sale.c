//program to calculate percentage
#include<stdio.h>
int main()
{
    float x,p;//x for discount p for value
    scanf("%f %f",&x,&p);
    //printf("\n%f %d ",x,p);
    printf("%0.2f",(100*p)/(100-x));
    return 0;
}
