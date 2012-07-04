/*
author: Simone M.
date: 4-22-12
   Palindromes are words, sentences, phrases, numbers, etc., that when you      reverse it, the words or numbers are still the same. 

Ex.
   Rats live on no evil star.
*/

#include<stdio.h>

main()
{
   int n, reverse = 0, temp;

   printf("ENTER A NUMBER TO CHECK IF IT IS A PALINDROME OR NOT \n");
   scanf("%d", &n);

   temp = n;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( n == reverse )
      printf("%d IS A PALINDROME NUMBER. \n", n);
   else
      printf("%d IS NOT A PALINDROME NUMBER. \n", n);

   return 0;
}
