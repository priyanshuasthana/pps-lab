#include<stdio.h>
#include<conio.h>
 void main()
 {
     char op;
     int a;
     int b;
     printf("enter the operations\n");
     scanf("%c",&op);
     printf("enter a\n");
     scanf("%d",&a);
     printf("enter b\n");
     scanf("%d",&b);
     clrscr();
     switch(op)
     {
	case '+':
	 printf("sum = %d ", a+b );
	 break;
	 case '-':
	 printf("sub = %d " ,a-b);
	 break;
	 case '*':
	 printf("mul = %d " ,a*b);
	 break;
	 case '/':
	 printf("divis = %d ",a/b);
	 break;
	 default:
	  printf("cannot perform any operations\n");
     }
     getch();
 }