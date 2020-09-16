package com.company;


import java.util.Arrays;
import java.util.Scanner;

class Main
{
    public static void main(String ar[])
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the number of students: " );
        int n = sc.nextInt();
        float a[] = new float[n];
        float avg;
        for(int i=0; i <n; i++)
        {
            a[i] = sc.nextFloat();
        }

        float sum=0;
        for(int i=0; i<n; i++)
        {
            sum = sum+a[i];
        }
        avg = sum / n;

        float t, t02=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<avg)
            {
                t = avg-a[i];
                float t01 = Math.round((t * 100)/100.0);
                t02 = t02+t01;
				/*String t01 = String.format("%.2f",t);
				t02 = Float.parseFloat(t01);
				t02 = t+t02;*/
                //System.out.println(t01);
            }
        }
        System.out.format("$%.2f",t02);
        System.out.println();
    }
}