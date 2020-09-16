/*
1.6.1 The 3n + 1 Problem


Input

The input will consist of a series of pairs of integers i and j, one pair of integers per
line. All integers will be less than 1,000,000 and greater than 0.

Output

For each pair of input integers i and j, output i, j in the same order in which they
appeared in the input and then the maximum cycle length for integers between and
including i and j. These three numbers should be separated by one space, with all three
numbers on one line and with one line of output for each line of input.

Sample Input
1 10
100 200
201 210
900 1000

Sample Output
1 10 20
100 200 125
201 210 89
900 1000 174


*/
#include<stdio.h>


int fun(int num)
{
    int count=1;
    while(num > 1)
    {
        count++;
        if(num %2 ==0)
        {
            num = num / 2;
        }
        else
        {
            num = num*3 + 1;
        }
    }
    return count;
}
void main()
{
   while(1)
   {
   int a,b,c=0;
   int max =0;

   scanf("%d%d",&a,&b);

   for(int i=a;i<=b;i++)
   {
       c = fun(i);
       if(c>=max)
       {
           max = c;
       }
   }
   printf("%d  %d  %d\n",a,b,max);
  }
}
