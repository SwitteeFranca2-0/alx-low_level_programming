#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 7, 8};
    int *p;

    p = &array[4];

    for (int i = 0; *(p + i); i++)
    {
        printf("%d\n", *(p + i));
    }
}