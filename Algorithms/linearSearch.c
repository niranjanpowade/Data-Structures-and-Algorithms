#include <stdio.h>
int linearSearch(int *arr, int target, int size)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == target)
        {
            printf("The target value %d is present at %d index.", target, index);
        }
    }
}
int main()
{
    int arr[6] = {5, 4, 7, 98, 6, 4};
    int target = 98;
    int size = 6;
    linearSearch(&arr, target, size);
}
