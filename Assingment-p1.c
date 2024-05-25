#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7};
   
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum+=arr[i];
        
    }
    printf(" sum of the array elements %d \n",sum);
    int avg=0;
    avg=sum/7;
    printf("avg = %d",avg);
}
