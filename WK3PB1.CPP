#include<stdio.h>
#include<conio.h>

int main()
{
   int cusid;
   int  unit;
   float bill;
   printf("enetr the customer id\n");
   scanf("%d",&cusid);
   printf("enter the unit consumed\n");
   scanf("%d",&unit);
   if(unit<=199)
   {
       bill = unit*1.20;
   }
   else if(unit>=200 && unit<=400)
   {
       bill = unit*1.50 ;
    }
    else if(unit>=400 && unit<=600)
    {
       bill = unit*1.80;
    }
     else
     {
	bill = unit*2.00;

     }
     if(bill<100)
     {
       printf("your bill amount is less than 100\n");
     }
     if(bill>400)
     {
	  bill = bill*15/100;
     }
     printf("The bill amount is  %f", bill);
     getch();
     return 0;
   }