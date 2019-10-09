#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long int i = get_long("Credit number: \n");
    long int a = i;
    long int d = i;
    long int b = 0;
    long int c = 0;
    while(a > 0)
    {
        
        b = a % 100;
        b = (b / 10) * 2;
        while(b > 9)
        {
            b = (b / 10)+(b % 10);
        }
        c = c + b;
        a = a / 100;
    }
    while(i > 0)
    {
        b = i % 10;
        c = c + b;
        i = i / 100;
    }
    c = c % 10;
    if(c == 0)
    {
            if((d >= 3400000000000000 && d < 3500000000000000)||(d >= 3700000000000000 && d < 3800000000000000))
            {
                printf("American Express \n");
            }
            else if(d >= 5100000000000000 && d < 5500000000000000)
            {
                printf("MasterCard\n");
            }
            else if((d >= 4000000000000000 && d < 5000000000000000)||(d >= 4000000000000 && d < 5000000000000))
            {
                printf("Visa\n");
            }
            else
            {
                printf("Invalid Card\n");
            }
        
    }
    else
        {
            printf("Card is invalid");
        }
}
