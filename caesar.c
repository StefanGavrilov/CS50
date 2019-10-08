#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int n = argv[1][0] - 48;
    
    if((int)argv[1][1] > 0)
    {
        n = (((int)argv[1][0] - 48) * 10 ) + ((int)argv[1][1] - 48);
    }
    
    if(argc != 2 || ((int)argv[1][0] < 49 || (int)argv[1][0] > 57))
    {
        printf("Usage: ./caesar key \n");
    }
    else
    {
        string a = get_string("plaintext: ");
        printf("ciphertext: ");
        for(int i = 0; i < strlen(a); i++)     
        {
            if((int)a[i] < 65 || ((int)a[i] > 90 && (int)a[i] < 97) || (int)a[i] > 122)
            {
                printf("%c", a[i]);
            }
            
            else if( (((int)a[i] > 64 && (int)a[i] < 91) && (int)a[i] + n > 90) || (((int)a[i] > 96 && (int)a[i] < 123) && (int)a[i] + n > 122))
            {
                printf("%c", a[i] + n - 26);
            }
            else
            {
                printf("%c", a[i] + n);
            }
            
        }    
        printf("\n");
    }
}
