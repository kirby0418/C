#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[10];
    int num1 = 283;

    sprintf(s1, "%d", num1);

    printf("%s\n", s1);

    return 0;
}