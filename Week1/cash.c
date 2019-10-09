#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change = get_float("Change: ");
    float a = 0;
    float q = 0;
    float d = 0;
    float n = 0;
    float p = 0;
    if(change > 0)
    {
        while(a + 0.25< change)
        {
            a = a + 0.25;
            q++;
        }
        while(a + 0.10 < change)
        {
            a = a + 0.10;
            d++;
        }
        while(a + 0.05< change)
        {
            a = a + 0.05;
            n++;
        }
        while(a < change)
        {
            a = a + 0.01;
            p++;
        }
        printf("quarters = %.0f\n", q );
        printf("dimes = %.0f\n", d );
        printf("nickels = %.0f\n", n );
        printf("pennies = %.0f\n", p );
        printf("Total change = %.2f\n", (q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01));
        printf("Number of coins = %.0f\n", q + d + n + p );
    }
    else
    {
        printf("Put valid amount \n");
    }
    
}
