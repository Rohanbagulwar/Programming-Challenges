/*
2.8.1 Jolly Jumpers

Input
Each line of input contains an integer n < 3, 000 followed by n integers representing the
sequence.
Output
For each line of input generate a line of output saying “Jolly” or “Not jolly”.
Sample Input
41423
5 1 4 2 -1 6
Sample Output
Jolly
Not jolly

*/

#include <stdio.h>

int main()
{
  do{
   int n,arr[50],diff[20],max,min,flag=2,count=0;

   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]<arr[i+1])
       {
           max = arr[i+1];
           min = arr[i];
           diff[i] = max - min;
           count++;
       }
       else
       {
           diff[i] = arr[i] - arr[i+1];
           count++;
       }
   }

   for(int i=0;i<count-1;i++)
   {
       if((diff[i] - diff[i+1]) != 1)
       {
           flag = 1;
           printf("Not jolly\n");
           break;
       }
       else
       {

       }
   }
   if(flag==2)
   {
       printf("Jolly\n");
   }
   for(int i=0;i<n-1;i++)
   {
       printf("%d ",diff[i]);
   }

  }while(1);

  return 0;
}
