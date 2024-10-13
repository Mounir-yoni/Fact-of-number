#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factoriellenumber(int number, int res);

int main()
{

    int number, result;

    printf("Enter the number:\n");
    scanf("%i", &number);

    if (number < 0)
    {
        printf("Factorial of a negative number is undefined.\n");
        return 1;
    }

    result = factoriellenumber(number, 1);

    printf("The result is: %i\n", result);
    return 0;
}

int factoriellenumber(int number, int res)
{
    if (number == 0)
    {
        return res;
    }
    res = res * number;
    number--;
    return factoriellenumber(number, res);
}
