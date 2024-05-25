#include <stdio.h>
int productOfN(int array[])
{
    int product=1;
    for(int i=0;i<7;i++)
    {
        product=product*array[i];
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7};
    int res=productOfN(arr);
    printf("%d",res);
}
