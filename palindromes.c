#include<stdio.h>
#include<string.h>

main()
{
   char a[100], b[100];

   printf("ENTER THE STRING TO CHECK IF IT IS A PALINDROME\n");
   gets(a);

   strcpy(b,a);
  /* sttrev(b);*/

   if( strcmp(a,b) == 0 )
      printf("ENTERED STRING IS A PALINDROME.\n");
   else
      printf("ENTERED STRING IS NOT A PALINDROME.\n");

   return 0;
}
