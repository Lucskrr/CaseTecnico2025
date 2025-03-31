#include <stdio.h>
#include <stdbool.h>

bool arithmeticAverage(int numbers[], int length, double *result)
{
    if (length < 3)
    {
        return false;
    }

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }

    *result = (double)sum / length;
    return true;
}

int main()
{
    int array1[] = {4, 6, 8};
    int array2[] = {1, 2};

    double result;

    if (arithmeticAverage(array1, 3, &result))
    {
        printf("%.2f\n", result);
    }
    else
    {
        printf("false\n");
    }

    if (arithmeticAverage(array2, 2, &result))
    {
        printf("%.2f\n", result);
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
