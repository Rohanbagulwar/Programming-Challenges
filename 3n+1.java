package com.company;


import java.util.Arrays;
import java.util.Scanner;

class Main
{
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int a = sc.nextInt();
        System.out.println("Enter last number: ");
        int b = sc.nextInt();

        int diff = b-a;
        int arr[] = new int[diff+1];
        int c;
        int count=1;
        int max =0;
        for(int i=a;i<=b;i++)
        {
            c = fun(i);
            if (c > max)
            {
                max = c;
            }
        }

        //Arrays.sort(arr);
        //System.out.println(a + " " + b + " " + arr[diff-1]);
        System.out.println(a + " " + b + " " + max);
    }

    private static int fun(int num) {
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
}