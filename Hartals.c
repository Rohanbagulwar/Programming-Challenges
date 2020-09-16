/*
2.8.3 Hartals


Input
The first line of the input consists of a single integer T giving the number of test cases
to follow. The first line of each test case contains an integer N (7 ≤ N ≤ 3, 650), giving
the number of days over which the simulation must be run. The next line contains
another integer P (1 ≤ P ≤ 100) representing the number of political parties. The ith
of the next P lines contains a positive integer hi (which will never be a multiple of 7)
giving the hartal parameter for party i (1 ≤ i ≤ P).
Output
For each test case, output the number of working days lost on a separate line.

Sample Input

2
14
3
3
4
8
100
4
12
15
25
40

Sample Output

5
15
*/

#include<stdio.h>

int check(int days, int parties, int hartals[])
{

        int daysLost = 0;
        for (int i=1;i<=days;i++){
            if (i%7==6 || i%7==0) continue;
            for (int j=0;j<parties;j++){
                if (i%hartals[j]==0) {
                    daysLost++;
                    break;
                }
            }
        }

        return daysLost;
}


void main()
{
        int testCases,days,parties;
        int result[20];
        scanf("%d",&testCases);

        for (int i=0;i<testCases;i++){
            scanf("%d",&days);
            scanf("%d",&parties);
            int hartals[parties];
            for (int j=0;j<parties;j++){
                scanf("%d",&hartals[j]);
            }
        result[i] = check(days,parties,hartals);
        }
        for(int k=0;k<testCases;k++)
        {
            printf("%d\n",result[k]);
        }
}

