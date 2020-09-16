/*
1.6.3 The Trip

Input
Standard input will contain the information for several trips. Each trip consists of a
line containing a positive integer n denoting the number of students on the trip. This is
followed by n lines of input, each containing the amount spent by a student in dollars
and cents. There are no more than 1000 students and no student spent more than
$10,000.00. A single line containing 0 follows the information for the last trip.
Output
For each trip, output a line stating the total amount of money, in dollars and cents,
that must be exchanged to equalize the students’ costs.
Sample Input
3
10.00
20.00
30.00
4
15.00
15.01
3.00
3.01
0
Sample Output
$10.00
$11.99

*/


#include<stdio.h>

void main()
{
    do
    {
    int stu;
    float arr[20],tot=0,avg,tot2=0;
    //printf("Enter total number of students \n");
    scanf("%d",&stu);

    for(int i=0;i<stu;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<stu;i++)
    {
        tot = tot + arr[i];
    }
    avg = tot / stu;
    //printf("%0.2f\n\n",avg);
    for(int i=0;i<stu;i++)
    {
        float temp=0;
        if(arr[i]<avg)
        {
            temp = avg - arr[i];
            tot2 = tot2 + temp;
        }
    }
    printf("$ %0.2f",tot2);
    }while(1);
}

