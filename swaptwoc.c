#include<stdio.h>
// #include<conio.h>
 
main()
{
   int x, y, temp;
 
   printf("Enter the value of x and y ");
   scanf("%d%d",&x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);
 
   temp = x;
   x = y;
   y = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
 
// getch();
   return 0;
}
