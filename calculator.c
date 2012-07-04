#include <stdio.h>
main()
{
   int a;
   int b;
   int c;
   char operator;
   char CR;

   printf("Hello, Welcome to the calculator program!\n");


   printf("Enter the first number to start the calculator\n");

   scanf("%d",&a);

   printf("Now enter an operator + - * % / \n");
   scanf("%c", &CR);

   scanf("%c", &operator);

   printf("great, now enter a second number\n");

   scanf("%d",&b);


//   printf("debug. value of operator char is %c \n", operator);
   
   switch(operator)
   {
   case '+':
   c = a + b;
   break;
   case '-':
   c = a - b;
   break;
   case '*':
   c = a * b;
   break;
   case '%':
   c = a % b;
   break;
   case '/':
   c = a/b;
   break;
   default:
   c = 0;
   }

   printf("Congratulations! Here is your result! %d \n", c);
 


   return 0;
}
