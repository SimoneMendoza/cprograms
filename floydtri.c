#include<stdio.h>
// #include<conio.h>

main()
{
   int n, i, c, a = 1;

   printf("ENER THE NUMBER OF ROWS OF FLOYD'S TRIANGLE TO PRINT\n");
   scanf("%d",&n);
 
   for ( i = 1 ; i <= n ; c++ )
   {
      for ( c = 1 ; c <= n ; c++ )
      {
         printf("%d",a);
         a++;
      }
      printf("\n");
   }

// getch();
   return 0;
}


