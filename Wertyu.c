/*
3.8.1 WERTYU

Input
Input consists of several lines of text. Each line may contain digits, spaces, uppercase
letters (except “Q”, “A”, “Z”), or punctuation shown above [except back-quote (‘)].
Keys labeled with words [Tab, BackSp, Control, etc.] are not represented in the input.
Output
You are to replace each letter or punctuation symbol by the one immediately to its left
on the QWERTY keyboard shown above. Spaces in the input should be echoed in the
output.
Sample Input
O S, GOMR YPFSU/
Sample Output
I AM FINE TODAY.

*/

#include<stdio.h>

void main()
{

    char str[50];
    int i;
    scanf("%[^\n]s",str);

    i=0;
    while(str[i] != '\0')
    {
        i++;
    }

    for(int j=0;j<i;j++)
    {
        if(str[j]==87 || str[j]==119){if(str[j]==87){str[j] = 'Q';}else{str[j] = 'q';}}

        else if(str[j]==66 || str[j]==98 ){if(str[j]==66){str[j] = 'V';}else{str[j] = 'v';}}
        else if(str[j]==67 || str[j]==99 ){if(str[j]==67){str[j] = 'X';}else{str[j] = 'x';}}
        else if(str[j]==68 || str[j]==100){if(str[j]==68){str[j] = 'S';}else{str[j] = 's';}}
        else if(str[j]==69 || str[j]==101){if(str[j]==69){str[j] = 'W';}else{str[j] = 'w';}}
        else if(str[j]==70 || str[j]==102){if(str[j]==70){str[j] = 'D';}else{str[j] = 'd';}}
        else if(str[j]==71 || str[j]==103){if(str[j]==71){str[j] = 'F';}else{str[j] = 'f';}}
        else if(str[j]==72 || str[j]==104){if(str[j]==72){str[j] = 'G';}else{str[j] = 'g';}}
        else if(str[j]==73 || str[j]==105){if(str[j]==73){str[j] = 'U';}else{str[j] = 'u';}}
        else if(str[j]==74 || str[j]==106){if(str[j]==74){str[j] = 'H';}else{str[j] = 'h';}}
        else if(str[j]==75 || str[j]==107){if(str[j]==75){str[j] = 'J';}else{str[j] = 'j';}}
        else if(str[j]==76 || str[j]==108){if(str[j]==76){str[j] = 'K';}else{str[j] = 'k';}}
        else if(str[j]==77 || str[j]==109){if(str[j]==77){str[j] = 'N';}else{str[j] = 'n';}}
        else if(str[j]==78 || str[j]==110){if(str[j]==78){str[j] = 'B';}else{str[j] = 'b';}}
        else if(str[j]==79 || str[j]==111){if(str[j]==79){str[j] = 'I';}else{str[j] = 'i';}}
        else if(str[j]==80 || str[j]==112){if(str[j]==80){str[j] = 'O';}else{str[j] = 'o';}}

        else if(str[j]==82 || str[j]==114){if(str[j]==82){str[j] = 'E';}else{str[j] = 'e';}}
        else if(str[j]==83 || str[j]==115){if(str[j]==83){str[j] = 'A';}else{str[j] = 'a';}}
        else if(str[j]==84 || str[j]==116){if(str[j]==84){str[j] = 'R';}else{str[j] = 'r';}}
        else if(str[j]==85 || str[j]==117){if(str[j]==85){str[j] = 'Y';}else{str[j] = 'y';}}
        else if(str[j]==86 || str[j]==118){if(str[j]==86){str[j] = 'C';}else{str[j] = 'c';}}
        else if(str[j]==87 || str[j]==119){if(str[j]==87){str[j] = 'Q';}else{str[j] = 'q';}}
        else if(str[j]==88 || str[j]==120){if(str[j]==88){str[j] = 'Z';}else{str[j] = 'z';}}
        else if(str[j]==89 || str[j]==121){if(str[j]==89){str[j] = 'T';}else{str[j] = 't';}}

        else if(str[j]==90 || str[j]==122){str[j] = '/';}
        else if(str[j]==93 || str[j]==125 ){str[j] = '[';}
        else if(str[j]==44 || str[j]==60 ){str[j] = 'M';}
        else if(str[j]==46 || str[j]==62 ){str[j] = ',';}
        else if(str[j]==47 || str[j]==63 ){str[j] = '.';}

        else if(str[j]== 48){str[j] = 9;}
        else if(str[j]== 49){str[j] = '`';}
        else if(str[j]== 50){str[j] = 1;}
        else if(str[j]== 51){str[j] = 2;}
        else if(str[j]== 52){str[j] = 3;}
        else if(str[j]== 53){str[j] = 4;}
        else if(str[j]== 54){str[j] = 5;}
        else if(str[j]== 55){str[j] = 6;}
        else if(str[j]== 56){str[j] = 7;}
        else if(str[j]== 57){str[j] = 8;}
        else if(str[j]== 45){str[j] = 0;}
        else if(str[j]== 61){str[j] = '-';}

        //printf("%d\n",str[j]);
    }
    printf("%s",str);

}
