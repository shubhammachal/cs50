#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main()
{
   float money;
   int count,leftover;
   count= 0;
   do {

        printf("money: ");
        money=GetFloat();
        
   }
   while(money<=0);
   leftover=round(money*100);
   
   count=leftover/25;
   count=round(count);
   leftover=leftover%25;
   
   count=count+(leftover/10);
   count=round(count);
   leftover=leftover%10;
   
   count=count+(leftover/5);
   count=round(count);
   leftover=leftover%5;
   
   count=count+leftover;
   printf("%d\n",count);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}