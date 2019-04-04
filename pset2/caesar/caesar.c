#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string k = argv[1];
    string p;
    char q;
    int s, i;
    if(argc==2)
        s = atoi(k);
    if(argc!=2 || s<0)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    else
        {
            p = get_string("plaintext: ");
            printf("ciphertext: ");

            for(i=0;i<strlen(p);i++)
                if( isalpha(p[i]))
                {
                    if(p[i]>='a' && p[i]<='z')
                        q=((p[i]+s-97)%26)+97;
                    if(p[i]>='A' && p[i]<='Z')
                        q=((p[i]+s-65)%26)+65;
                    printf("%c", q) ;
                }
                else
                    printf("%c", p[i]);
                printf("\n");
        }
    (void)argc;

    return 0;
}