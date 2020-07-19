#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0, i = 1;

    while (total < 1000)                //once total hits 1000, stop loop
    {
        if (i % 3 == 0 || i % 5 == 0)   //if its possible to divide i by 5 or 3
        {
            printf("%d\n", i);
            total = total + i;          //count i to total
        }
        i++;
    }
}
