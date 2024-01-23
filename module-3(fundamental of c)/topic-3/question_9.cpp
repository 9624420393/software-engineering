//Write a program make a summation of given number (E.g., 1523 Ans: -11)//
#include <stdio.h>
int main()
{
  int n,sum=0,i,value;
 
  printf("enter the number :\n");
  scanf("%d",&n);
 
  printf("Enter %d integers\n",n);
 
  for (i=1;i<=n;i++)
  {
    scanf("%d",&value);
    sum=sum+value;
  }
 
  printf("Sum of the integers = %d\n",sum);
 
  return 0;
}
