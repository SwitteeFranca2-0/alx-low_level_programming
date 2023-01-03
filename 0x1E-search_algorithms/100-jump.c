#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int min(int a, int b);

/**
 * jump_search - jump search
 * @array: array to be searched
 * @size: size of the array.
 * @value: value to be searched for
 * Return: int
*/
int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, b = 0;
    int d = 0;

    if (!(array))
        return (-1);
    
    while (array[min(b, size)]  <  value)
    {   
        printf("Value checked array[%d]\n", min(b, size));
        i = b;
        b += sqrt(size);
        if (i >= size)
            return (-1);
    }


    printf("Value found between [%ld] and [%ld]\n", i, b);

    while (array[i] < value)
    {
        printf("Value checked array[%ld]\n", i);
        i = i + 1;
        d = i;
        if (d > min(b, size))
            return (-1);
    }

    if (array[i] == value)
        {
            printf("Value checked array[%ld]\n", i);
            return (i);

        }
    return (-1);


}

/**
 * min - minimum of values
 * @a: one value
 * @b: another value
 * Return: int
*/
int min(int a, int b)
{
    if (a > b)
    {
        return (b);
    }
    return (a);
}