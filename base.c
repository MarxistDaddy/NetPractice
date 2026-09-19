#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int mask;
    int increment;
    int start;
    int end;

    if (ac != 2)
        return 1;

    mask = atoi(av[1]);
    increment = 256 - mask;

    printf("Increment: %d\n\n", increment);

    start = 0;
    while (start < 256)
    {
        end = start + increment - 1;

        printf("%d - %d\n", start, end);

        start += increment;
    }

    return 0;
}
