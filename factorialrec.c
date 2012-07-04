#include<stdio.h>

long factorial(int);

main()
{
   int num;
   long f;

   printf("ENTER A NUMBER TO FIND FACTORIAL :");
   scanf("%d",&num);

   if(num<0)
      printf("NEGATIVE NUMBERS ARE NOT ALLOWED");
   else
   {
      f = factorial(num);
      printf("%d!=%ld\n",num,f);
   }
   return(0);
}

long factorial(int n)
{
   if(n==0)
      return(1);
   else
      return(n*factorial(n-1));
} 
