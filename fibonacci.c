/*
  author:Simone Mendoza
  date:July 3, 2012
  This program will give an n number of Fibonacci numbers.
*/
#include<stdio.h> 
main()  
 {
      printf("ENTER THE NUMBER OF FIBONACCI YOU WANT: \n");
      int n;
      scanf("%d", &n);
      printf("HERE ARE YOUR FIBONACCI NUMBERS:\n");
     
      int f;
      int i;
      for ( i = 0 ; i <= n ; i++)
      {
         f = fib(i);
      
         printf("%d\n", f);
      }
      return 0;

 }

   /*
     Computes a Fibonacci number.
   */
   int fib(int n)
   {
      if (n < 2)
           return n;
      else
           return fib(n - 1) + fib(n - 2);
   }
