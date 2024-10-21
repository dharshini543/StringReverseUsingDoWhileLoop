#include <stdio.h>

int main()
{
    int length = 11;
    int i = 0;
    char string[] = "Hello World";

    printf("Reverse of Hello World is\n");
    do
    {
        char ch = string[i];
        string[i] = string[11 - i - 1];
        string[11-i-1] = ch;
        i++;

    }while(i < length/2);
    printf("%s\n",string);
    return 0;
}

