#include<stdio.h>
//Function declaration
int prime number(int num,int i);
int main()
{
  int num,c;
  Printf("enter a number:");
  Scanf("%d",&num);
  C=primenumber(num,num/2);
  if(c==1)
  {
   Printf("%d is a prime number\n",num);
   }
   else
   {
    Printf("%d is not a prime number\n",num);
   }
   return 0;
}
  //Recursion function
   int primenumber(int num,int i)
  {
    if(i==1)
   { 
    return 1;
   }
   else
   {
    if (num% i==0)
   {
     return 0;
    else
} 
   }
   }
   
