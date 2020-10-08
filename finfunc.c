#include<stdio.h>
#include<fibmake.h>
 void fibonacciSeries(int num)
 {
   int firstnum=0;
   int secondnum=1;
   int thirdnum;
   int i;
   for(i=0; i<num; i++)
   {
     printf("%d\t", firstnum);
     thirdnum = firstnum+secondnum;
     firstnum =secondnum ;
     secondnum = thirdnum;
   }
 }

 
