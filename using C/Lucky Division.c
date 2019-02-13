#include <stdio.h>
#include <stdlib.h>

int check_for_luck(unsigned int n)
{
    int rem;

    while (n > 0)
    {
        rem = n%10;
        if (rem != 7 && rem != 4)
            return 0;
        n /= 10;
    }

    return 1;
}

int main()
{
    unsigned int *arr = NULL, total_lucky;
    unsigned int n, i;

    //Creating array of all lucky numbers from 1 to 1000 i.e. given constraints
    //smallest lucky number = 4 and largest = 777 so only looping between them including them.
    total_lucky = 0;
    for (i = 4; i <= 777; i++)
        if (check_for_luck(i) == 1)
        {
            total_lucky++;
            arr = (unsigned int *)realloc(arr, total_lucky*sizeof(unsigned int));
            arr[total_lucky - 1] = i;
        }

    scanf("%u", &n);

    for (i = 0; i < total_lucky; i++)
        if (n%arr[i] == 0)
        {
            printf("YES\n");
            return 0;
        }

    printf("NO\n");

    return 0;
}
