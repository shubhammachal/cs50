#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int i,j,k;
    int height;
    do{
        printf("height: ");
        height=GetInt();
        if(height==0)
        return 0;
    }
    while(height<1 || height>23);
    for(i=0;i<height;i++)
    {
        for(j=0;j<height-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<i+2;k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}