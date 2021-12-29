#include<stdio.h>
 main()
 {
     int n;

     printf("\n Enter a Number  : ");
     scanf("%d",&n);

     if(n % 5 == 0)
     {
         printf("\n Number Is Divisible by 5");
     }
     else
     {
         printf("\n Number Is Not divisible by 5 ");
     }
 }
