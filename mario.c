#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0; 
    
    do 
    {
        printf("Height: ");
        n = GetInt();
        if (n < 1 || n > 23)
        {
            printf("Please enter a number between 1 and 23\n");
        }
     }
    
    while (n < 1 || n > 23);
    for (int i = 0; i < n; i++)
    {    
        
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < i+2; k++)
        {
            printf("#");
        }
     printf("\n");
     }
}
