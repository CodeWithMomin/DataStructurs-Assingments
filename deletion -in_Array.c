
#include <stdio.h>

int main()
{
 int size=10;
 int item,index;
 int A[size];
 printf("enter the array elements\n");
 for(int i=0;i<size;i++)
 {
     scanf("%d",&A[i]);
 }
 printf("enter the item to be deleted\n");
 scanf("%d",&item);
 for(int i=0;i<size;i++)
 {
    if(A[i]==item)
    {
        index=i;
        break;
    }
 }
 for(int i=0;i<size;i++)
 {
  printf("%d \n",A[i]);   
 }
 for(int i=index;i<size;i++)
 {
     A[i]=A[i+1];
 }
 size=size-1;
  for(int i=0;i<size;i++)
 {
  printf("%d",A[i]);   
 }
}
