#include<stdio.h>

main()
{
   int row, c, n, temp;
 
   printf("ENTER THE NUMBER OF ROWS IN PYRAMID OF STARS YOU WISH TO SEE \n");
   scanf("%d",&n);

   temp = n;

   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c <= temp ; c++ )
         printf(" ");

      temp--;

      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         printf("*");

      printf("\n");
   }
   
   return 0;
}
