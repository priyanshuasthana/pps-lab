#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  float c,b;
  printf("enter the integer variable\n");
  scanf("%d",&a);
  printf("enetr the float variable\n");
  scanf("%f",&b);
  c=a*(int)b;
  printf("the value = %f",c);
  getch();
}