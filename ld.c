#include<stdio.h>
/*#include<conio.h>*/
/*#include<dir.h>*/
 
main()
{
   int done;
   struct ffblk a;
 
   printf("Press any key to view the files in the current directory\n");
 
   getch();
 
   done = findfirst("*.*",&a,0);
 
   while(!done)
   {
      printf("%s\n",a.ff_name);
      done = findnext(&a);
   }
 
   getch();
   return 0;
}
