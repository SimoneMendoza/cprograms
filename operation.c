#include<stdio.h>

main()
{
   int a;
   int b;
   int add;
   int subtract;
   int multiply;
   float divide;

   printf("Enter two integers\n");
   scanf("%d%d", &a, &b);

   add = a + b;
   subtract = a - b;
   multiply = a * b;
   divide = a / (float)b;

   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);

   return 0;
}













