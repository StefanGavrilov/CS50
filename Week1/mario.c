#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 8;
    int space = 1;
    int number = 0;
    int block = number - 1;
    
    while(number < height)
    {
        while(space < height)
        {
            printf(".");
            space++;
        }
        while(block < number)
        {
            printf("#");
            block++;
        }
        printf("\n");
        number++;
        space = number + 1;
        block = -1;
    }
}
