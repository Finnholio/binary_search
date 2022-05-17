#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}


}

int binsearch(void *elt, size_t size, void *arr, size_t length, int (*compare)(void *, void *))
{
    size_t i = length / 2;
    char *array = arr;

    while (i < length)
    {
        int comparison = compare(array + i * size, elt);

        if (comparison == 0)
        {
            return i;
        }

        if (comparison < 0)
        {
            i += (length - i + 1) / 2;
        }
        else
        {
            length = i;
            i /= 2;
        }
    }

    return -1;
}
