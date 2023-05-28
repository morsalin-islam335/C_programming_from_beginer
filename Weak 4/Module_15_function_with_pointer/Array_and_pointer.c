#include<stdio.h>
int main()
{
    int arr[5]={1,3,5,7,9};
    printf("%p",&arr[0]);

    printf("\n%p",arr);
    printf("\n0 th index value is %d",*arr);
    printf("\n%d",2[arr]);
    //dereferencing with array.
    //rule array_name +(index)
    printf("\n1 th index is :%d",*arr+1);
    //we can also access a pointer variable with assigning.
    int *arr2=arr+3;
    printf("\n%d",*arr2);

    return 0;
}
