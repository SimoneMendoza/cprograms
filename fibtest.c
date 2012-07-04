#include<stdio.h>
/*#include<conio.h>*/
 
 int fib(int);
 int f=1,fib1=0,fib2=0,i=0,j;
 void main()
{
   int num;
  /*clrscr();*/
   printf(" HOW MANY FIBONACCI NUMBERS DO YOU WANT?\n");
   scanf("%d",&num);
   printf("\nTHESE ARE THE FIBONACCI NUMBERS:\n");

   f=0;

   printf("\n%d\n",f);

   f=1;

   printf("\n%d\n",f);

   for(j=0;j<num-2;j++)
   {
      f=fib(num);

      printf("\n%d\n",f);
   }
  
   /*getch();*/
   }

 int fib(int n)
{
   while(i<n)
   {
      if(i<=n)
      {
         i++;
         fib1=fib2;
         fib2=f;
         f=fib2+fib1;
         fib(1);
 
         return f;
      }
   }
 
} 























































































 



