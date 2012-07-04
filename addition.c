#include<stdio.h>

main()
{
   int a;
   int b;
   int c;

   printf("Enter two numbers you would like to add\n");
   scanf("%d%d",&a,&b);

   c = a + b;

   printf("The sum of entered numbers = %d\n",c);

   return 0;
} 
