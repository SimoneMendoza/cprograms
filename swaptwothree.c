#include<stdio.h>

main()
{
   int a, b;

   printf("Enter two numbers to swap ");
   scanf("%d%d",&a,&b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("a = %d\nb = %d\n",a,b);
   return 0;
}
