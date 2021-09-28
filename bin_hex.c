#include "func.c"

int main(int argc, char **argv)
{
    if(argc != 2) 
    {
        printf("Usage: number\n");
        exit(1);
    }

    //uint64_t hex = atoi(argv[1]);

    uint64_t x = 0;

    char* str = argv[1];


    char func = str[strlen(str) - 1];

    //printf("%c\n",func);



    switch(func)
    {
        case 'b':
        binary(str);
        exit(0);

        case 'h':
        hexde(strtol(str,NULL,16),str);
        exit(0);

        case 'd':
        dec(atoi(str),str);
        exit(0);
    }


    printf("\n");

}