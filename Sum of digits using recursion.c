#include<stdio.h>
int sum of digits(int num);
int main()
{
int num,sum;
    Printf("enter any number to find sum of digits:");
    Scanf("%d",&num);
    Sum=sum of digits(num);
    Printf("sum of digits of %d=%d",num,sum")
    
    return 0;
}
int sum of digits(int num)
{
  if(num==0)
    return 0;
  return ((num%10)+sum of digits(num/10));
 





Output:
 Enter any digit:3,4
7 is an sum of digit
