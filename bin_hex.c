#include "func.c"

int main(int argc, char **argv)
{
    if(argc != 2) 
    {
        printf("Usage: number\n");
        printf("To run this program you need to put a letter at the end of number (without any spaces)\n");
        printf("h - hexadecimal\nb - binary\nd - decimal\n");
        printf("You will get an error if you choose wrong format :((\n");
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

        default:
        printf("You dont give any number format!!\n");
        exit(-1);

    }


    printf("\n");

}