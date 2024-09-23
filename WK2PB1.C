#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  printf("enter the value\n");
  scanf("%d",&n);
  clrscr();
  if(1<=n<=9)
  {
	 printf("the number is %c" ,n) ;
  }
    else
    {
      printf("Number is greater than 9 \n");
    }
    getch();
}