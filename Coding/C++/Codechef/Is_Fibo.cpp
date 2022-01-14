#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



      

 int main(){
     int t;
     long n ;
     scanf("%d",&t);
     long i ,c;
     for (i=0;i<t;i++){
         int c1 =0;
         scanf("%ld",&n);
          long int a =0;
          long int b =1;
         if (n==1 || n==0){
             c1=1;
             printf("IsFibo\n");
             continue;
         }
         c=a+b;
         while(c<=n){
             if(c==n){
                 printf("IsFibo\n");
                 c1=1;
                 break;
             }
             a=b;
             b=c;
             c=a+b;
             
            
             
         }
         if(c1==0){
             printf("IsNotFibo\n");
         }
     }
 }