#include <stdio.h>
int fact(int n) // non tail
{
    if (n == 1)
        return n;
    else
        return n * fact(n - 1);
}
int factTail(int n, int a) // tail
{
    if (n == 1)
        return a;
    else
        return factTail(n - 1, a * n);
}
int main()
{
    int n, i, f = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial using iteration: %d\n", f);
    printf("Non-Tail: %d\n", fact(n));
    printf("Tail: %d\n", factTail(n, 1));
    return 0;
}