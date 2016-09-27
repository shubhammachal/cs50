#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int m,bottles;
    printf("minutes: ");
    m = GetInt();
    
    bottles = m * 12;
    printf("bottles: %d\n",bottles);
   
return 0;
}