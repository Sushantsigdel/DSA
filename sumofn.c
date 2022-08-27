#include <stdio.h>
int sum(int n);
int sumtail(int n, int a);
int main()
{
    int n, a = 0, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of n using non-tail %d\n", sum(n));
    printf("Sum of n using tail %d\n", sumtail(n, 0));
    for (i = 1; i <= n; i++)
    {
        a += i;
    }
    printf("Sum of n using iteration %d\n", a);
    return 0;
}
int sum(int n) // non tail
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int sumtail(int n, int a) // tail
{
    if (n == 0)
        return a;
    else
        return sumtail(n - 1, a + n);
}