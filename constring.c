#include<stdio.h>
/*#include<conio.h>*/
#include<string.h>
 
main()
{
   char a[100], b[100];
 
   printf("Enter the first string\n");
   gets(a);
 
   printf("Enter the second string\n");
   gets(b);
 
   strcat(a,b);
 
   printf("String obtained on concatenation is %s\n",a);
 
  /*getch();*/
   return 0;
}
