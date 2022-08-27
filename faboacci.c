#include <stdio.h>
int fab(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fab(n - 1) + fab(n - 2);
}
int main()
{
    int n, first = 0, second = 1, result, i;
    printf("Enter the nth value: ");
    scanf("%d", &n);
    printf("Fabonacci Series using Iteration:\n");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            result = i;
        else
        {
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d\t", result);
    }
    printf("\nFabonacci series using recursion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", fab(i));
    }
    return 0;
}
