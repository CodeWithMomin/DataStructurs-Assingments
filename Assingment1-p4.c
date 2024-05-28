#include <stdio.h>
int displayEven(int A[])
{
    for(int i=0;i<14;i++)
    {
        if(A[i]%2==0)
    printf(" Even number %d \n",A[i]);
    }
}
int displayOdd(int A[])
{
    for(int i=0;i<14;i++)
    {
      if (A[i] % 2 != 0)
        printf(" odd number  %d \n ",A[i]);
    }
}
int main()
{
    int arr[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
displayEven(arr);
displayOdd(arr);
  
   // printf("largest element in an Array is: %d \n",largest);
