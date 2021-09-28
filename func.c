#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>



void binary(char* str)
{

//printf("num in hexadecimal: 0x%lx\n",dec);
//printf("num in decimal: %ld\n",dec);

uint64_t bin = 0;

printf("num in binary: ");

for(int i = 0; i <= strlen(str)-2; i++)
{
    //printf("%c",str[i]);

    bin = bin << 1;

    if(str[i] == '1')
    {
        printf("1");
        bin = bin + 1;
    }

    else if(str[i] == '0')
    {
        printf("0");
    }

    else
    {
        printf("INVALID NUMBER (%c) BINARY FORMAT DOESNT SUPPORT THIS NUMBER\n",str[i]);
        exit(-1);
    }

}
    printf("\n");
    printf("num in hexadecimal: 0x%lx\n",bin);
    printf("num in decimal: %ld\n",bin);

}

void hexde(uint64_t hex,char* str)
{
    
    uint64_t bin = 0;

    for(int i = 0; i <= strlen(str)-2; i++)
    {

        switch (str[i])
        {

        case '0'...'9':
        break;

        case 'a'...'f':
        break;

        case 'A'...'F':
        break;


        default:
        printf("INVALID NUMBER (%c) HEXADECIMAL FORMAT DOESNT SUPPORT THIS NUMBER\n",str[i]);
        exit(-1);
    
    }
    
    }


    printf("\n");
    printf("num in hexadecimal: 0x%lx\n",hex);
    printf("num in decimal: %ld\n",hex);

    printf("num in binary: ");

    for(int i = 0; i < 64; i++)
    {
        
        bin = hex & 0x8000000000000000;
        bin = bin >> 63;
        printf("%ld",bin);
        //bin = bin << 1;
        hex = hex << 1;
    }

    printf("\n");

}

void dec(uint64_t dec,char* str)
{

    for(int i = 0; i <= strlen(str)-2; i++)
    {

        switch (str[i])
        {

        case '0'...'9':
        break;

        default:
        printf("INVALID NUMBER (%c) DECIMAL FORMAT DOESNT SUPPORT THIS NUMBER\n",str[i]);
        exit(-1);
        }
    
    }

    printf("num in decimal: %ld\n",dec);
    printf("num in hexadecimal: 0x%lx\n",dec);
    printf("num in binary: ");

    uint64_t bin;

    for(int i = 0; i < 64; i++)
    {
        
        bin = dec & 0x8000000000000000;
        bin = bin >> 63;
        printf("%ld",bin);
        //bin = bin << 1;
        dec = dec << 1;
    }

    printf("\n");

}
