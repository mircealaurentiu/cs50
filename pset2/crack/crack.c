#define _XOPEN_SOURCE
#include <unistd.h>

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    //int i,j,k,l,m;
    //int letters[]= {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
    char salt[2];
    char pw[5]={""};

    pw[4]='\0';

    if(argc!=2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    strncpy(salt, argv[1], 2);

    printf("%s ", crypt("UPenn","50"));

    return 0;
}

