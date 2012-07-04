/* author: Simone
date: 4/22/12
 This c program add n numbers which will be entered by the user. Firstly user will enter a number indicating how many numbers user wishes to add and then user will enter n numbers. In our c program to add numbers we are not using an array, if you wish you can use an array.*/

#include <stdio.h>

main()
{
   int n, sum = 0, c, value;

   printf("Enter the numbers of integers you want to add\n");
   scanf("%d", &n);

   printf("Enter %d digits\n",n);

   for ( c = 1 ; c <= n ; c++ )
   {
      scanf("%d",&value);
      sum = sum + value;
   }

   printf("Sum of entered integers = %d\n", sum);

   return 0;
}
