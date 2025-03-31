#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return i + 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}

int main()
{
    int array[] = {5, 1, 0, 7, 3, 3};
    int length = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, length - 1);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]); // Saída: 0 1 3 3 5 7
    }
    printf("\n");

    return 0;
}
