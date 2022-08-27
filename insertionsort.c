#include <stdio.h>
int main()
{
    int arr[20], i, j, n, key;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter data:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j > 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Sorted data are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}