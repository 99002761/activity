
#include<fibmake.h>
int main()
 {
   int term;

   printf("Enter term: ");
   scanf("%d", &term);

   printf("The fibonacci series is: \n");

   fibonacciSeries(term);

   return 0;
 }
