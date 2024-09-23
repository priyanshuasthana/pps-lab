#include<stdio.h>
#include<conio.h>
 void main()
 {
     int a=2;
     int b=3;
     int temp = 0;
      printf("Before Swapping:-%d%d" ,a,b);
      temp = a;
      a=b;
      b=temp;
     printf("after SWapping %d %d" ,a,b);
     getch();
 }