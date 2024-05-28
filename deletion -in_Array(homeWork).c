
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
int newsize=size;
 for(int i=0;i<newsize;)
 {
     if(A[i]==item)
     {
         for(int j=i;j<newsize-1;j++)
         {
             A[j]=A[j+1];
         }
         newsize--;
     }
     else
     {
         i++;
     }
 }
 for(int i=0;i<newsize;i++)
 {
     printf("%d",A[i]);
 }
}
