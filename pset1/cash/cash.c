#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float n;
    int count=0;

    do
    {
        n = get_float("Change owed: ");
    }while(n<0);
    n=n*100;
    n=round(n);


    while(n>=25)
    {
        count++;
        n=n-25;
    }
    while(n>=10)
    {
        count++;
        n=n-10;
    }
    while(n>=5)
    {
        count++;
        n=n-5;
    }
    while(n>=1)
    {
        count++;
        n=n-1;
    }

    printf("%d\n", count);
}