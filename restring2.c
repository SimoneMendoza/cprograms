#include<stdio.h>
#include<string.h>
 
void reverse(char*,int,int);
 
main()
{
   char a[100];
 
   gets(a);
 
   reverse(a, 0, strlen(a)-1);
 
   printf("%s\n",a);
 
   return 0;
}
 
void reverse(char *x, int beg, int end)
{
   char a, b, c;
 
   if ( beg >= end )
      return;   
 
   c = *(x+beg);
   *(x+beg) = *(x+end);
   *(x+end) = c;
 
   reverse(x, ++beg, --end);
}
