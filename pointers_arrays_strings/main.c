#include "main.h"
#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    int i;

    reverse_array(nums, 6);

    for (i = 0; i < 6; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return (0);
}

