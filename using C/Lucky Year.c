#include <stdio.h>

int find_no_digits(unsigned long int data, int *first_digit)
{
    int digits = 0;

    while (data > 0)
    {
        *first_digit = data;
        digits++;
        data /= 10;
    }

    return digits;
}

//pow() function of math.h did not work
//I don't know why so I made this function to find the power of 10
unsigned long int power(const int digit)
{
    int i;
    unsigned long int ans;

    for (i = 1, ans = 1; i <= digit; i++)
        ans *= 10;

    return ans;
}

int main()
{
    unsigned long int year, ans;
    int digits, first_digit;

    scanf("%lu", &year);

    digits = find_no_digits(year, &first_digit);

    //printf("%lu \t %d \t %d\n", year, digits, first_digit);

    first_digit++;
    digits--;
    ans = power(digits);

    //printf("%lu \t %d \t %d %lu\n", year, digits, first_digit, ans);

    printf("%lu\n", (first_digit*ans) - year);

    return 0;
}
