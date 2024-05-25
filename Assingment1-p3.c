/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int findSmallest(int A[])
{
    int min=A[0];
    for(int i=1;i<7;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    return min;
}
int findlargest(int A[])
{
    int max=A[0];
    for(int i=1;i<7;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}
int main()
{
    int arr[10]={12,21,13,4,5,6,7};
    int smallest=findSmallest(arr);
    int largest=findlargest(arr);
    printf(" smallest element in an Array is : %d \n",smallest);
    printf("largest element in an Array is: %d \n",largest);
    
    
}
