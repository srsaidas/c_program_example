/*
 * Write a program to check whether a given number is odd or even
 * Example
 * 1 - Postive odd
 * -1 -  Negative odd
 * 2 - Postive even
 * -2 - Negative even
 * 0 - Neither odd nor even
 * Author: Saidas S R
 *
 * */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char * argv[])
 {
   // Variable declartion
   int number;

   // Checking number is passed through Command line
   if (argc < 2)
   {
     printf("Not enough number of arguments \n");
     return -1;
   }

   // Converting command line argumnet  string to int
   number = atoi(argv[1]);

   // print <num> is
   // -1 is a Negative  odd number
   printf("%d is ", number);


   // number is 0 is not oven or odd Neither postive ornegative
   /
   if (number == 0)
   {
     printf(" is Neither odd/even or Postive/ Negative \n");
     return 0;
   }

   if(number < 0 )
   {
     printf(" a Negative");
   }else if(number > 0)
   {
     printf(" a Postive");
   }

   if(number % 2)
   {
     printf(" odd Number\n");
   }
   else
   {
     printf(" even number\n");
   }

 }
