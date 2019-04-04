#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, i, a, b, s;

    do
    {
        n = get_int("Height: ");
    }while(n<0 || n>23);

    s=n-2;
    for(i=1; i<=n; i++)
    {
        for(a=s; a>=0; a--)
            printf(" ");
        for(b=n-s-1; b>=0; b--)
            printf("#");
        s--;
        printf("\n");
    }
}