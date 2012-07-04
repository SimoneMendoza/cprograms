/*
  author: Simone Mendoza
  date: July 2, 2012
  Reference:www.c-program-example.com/2011/10/c-program-to-print-fibonacci-numbers.html Daddy, I hope you will like this and I hope I did this correctly.  This program will show how to find an n number of fibonacci numbers.
    
   Ex.
     n = 6
     0,1,1,2,3,5
*/
#include<stdio.h>
/*#include<conio.h>*/

 int fib(int);          
 int f=1,fib1=0,fib2=0,i=0,j; /*These are the variables being used*/
 void main()
{
   int num;
  /*clrscr();*/
   printf("HOW MANY FIBONACCI NUMBERS DO YOU WANT?\n");/*the strings are being*/
   scanf("%d",&num);                                   /*printed and formatted*/
  
   printf("\nTHESE ARE THE FIBONACCI NUMBERS:\n");

   f=0;

   printf("\n%d\n",f);   /* the integers are being printed and formatted*/

   f=1;

   printf("\n%d\n",f);

   for(j=0;j<num-2;j++)
   {
      f=fib(num);

      printf("\n%d\n",f);
   }

   /*getch();*/
   }

 int fib(int n)   /*This is a fibonacci sequence generator.*/
{
   while(i<n)              /*These are to calculate the fibonacci numbers*/
   {
      if(i<=n)
      {
         i++;
         fib1=fib2;
         fib2=f;
         f=fib2+fib1;
        //fib(1);

         return f;      /* The f is for fibonacci so that ALL the numbers of fib
                        number will be listed instead of all 0s with return 0*/
      }
   }

}
