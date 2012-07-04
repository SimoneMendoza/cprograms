#include<stdio.h>
//#include<conio.h>

main()
{
   int c, n, fact = 1;

   printf("Enter a number to calculate it's factorial\n");
   scanf("%d", &n);

   for( c= 1 ; c <= n ; c++ )
      { 
   printf("The value of counter c = %d\n",c); 
 fact = fact*c;
}
 
   printf("Factorial of %d = %d\n",n,fact);

// getch();
   return 0;
}
