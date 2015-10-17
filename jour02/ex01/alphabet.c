#include <stdio.h>

void main()
{
    int i;
    //ex00
    for (i='a';i<'z'+1;i++)
    {
        putchar(i);
    }
    printf("\n");
    //ex01
    for (i='z';i>'a'-1;i--)
    {
        putchar(i);
    }
}
