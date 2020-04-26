#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int i,T;
     scanf("%d",&T);
     int arr[T];
     unsigned long long fac[T];

     for(i=0;i<T;i++)
     {
         scanf("%d",&arr[i]);
         
         fac[i] = (arr[i] * (arr[i]-1))/2;
     }

     for(i=0;i<T;i++)
     printf("%llu\n",fac[i]);

     return 0;
 } 