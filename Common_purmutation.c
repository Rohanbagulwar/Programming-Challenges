/*
3.8.3 Common Permutation


Input

The input file contains several cases, each case consisting of two consecutive lines. This
means that lines 1 and 2 are a test case, lines 3 and 4 are another test case, and so on.
Each line contains one string of lowercase characters, with first line of a pair denoting
a and the second denoting b. Each string consists of at most 1,000 characters.

Output

For each set of input, output a line containing x. If several x satisfy the criteria above,
choose the first one in alphabetical order.
Sample Input

pretty
women
walking
down
the
street

Sample Output

e
nw
et
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    do
    {
    char str[50],srch[15],b[15],temp;
    int i,j;
    int count1=0;

    gets(str);
    fflush(stdin);
    gets(srch);

    i=0;
    while(str[i]!='\0')
    {
        j=0;
        while(srch[j]!='\0')
        {
            if(str[i]==srch[j])
            {
                b[count1]=str[i];
                count1++;
            }
            j++;
        }
        i++;
    }
for (i = 0; i < count1-1; i++) {
      for (j = i+1; j < count1; j++) {
         if (b[i] > b[j]) {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
         }
      }
   }
for (int i = 0; i < count1; i++) {
      for (int j = i + 1; j < count1;) {
         if (b[j] == b[i]) {
            for (int k = j; k < count1; k++) {
               b[k] = b[k + 1];
            }
            count1--;
         } else
            j++;
      }
   }
for(int l=0;l<count1;l++)
{
    printf("%c",b[l]);
}

printf("\n");
    }while(1);
}
