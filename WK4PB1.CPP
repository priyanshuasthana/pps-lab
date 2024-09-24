#include<stdio.h>
#include<conio.h>
//factors and factorial
void main()
{
   int fact=1;
   int factors=0;
   int n;
   clrscr();
   printf("enter the number\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
     fact=fact*i;
   }
   for(int j=1;j<=n;j++)
   {
      if(n%j==0)
      {

	 printf("factors = %d\n",j);
	factors = factors+j;

      }
   }
   printf("Factorial of %d = %d\n",n ,fact);
   printf("Total of factors of %d = %d",n, factors);
   getch();
}