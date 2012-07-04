#include<stdio.h>
#include<string.h>

main()
{
   char a[100];
   int length;

   printf("ENTER A STRING TO CALCULATE IT'S LENGTH\n");
   gets(a);

   length = strlen(a);

   printf("LENGTH OF ENTERED STRING IS = %d\n",length);

   return 0;
}

