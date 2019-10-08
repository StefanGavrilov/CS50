#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{    
    int check = 0;
    int key;
    int k = 0;
    if(argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                check += 1;
                if(check == strlen(argv[1]))
                {
                    string plain = get_string("plaintext:  ");
                    printf("ciphertext: ");
                    
                    for(int j = 0; j < strlen(plain); j++)
                    {
                        if(argv[1][k] >= 'a' && argv[1][k] <= 'z')
                        {
                             key = (int)(argv[1][k]) - 97;
                        }
                        else
                        {
                             key = (int)(argv[1][k]) - 65;
                        }
                        if(plain[j] <= '@' || plain[j] >= '{' || (plain[j] >= '[' && plain[j] <= '`'))
                        {
                            printf("%c", plain[j]);
                            if(k != 0)
                            {
                                k--;
                            }
                            else if(k == 0)
                            {
                                k = 4;
                            }
                        }
                        else if((plain[j] >= 'A' && plain[j] <= 'Z' && plain[j] + key > 'Z') || (plain[j] >= 'a' && plain[j] <= 'z' && plain[j] + key > 'z'))
                        {
                            printf("%c", plain[j] + key - 26);
                        }
                        else
                        {
                            printf("%c", plain[j] + key);
                        }
                        k++;
                        if(k == strlen(argv[1]))
                        {
                            k = 0;
                        }
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
                break;
            }
        }
    }                
}
