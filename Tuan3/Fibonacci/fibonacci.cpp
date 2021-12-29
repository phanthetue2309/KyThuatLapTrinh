#include <stdio.h>
int Fibonacci(int n)
{
    long long int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3;
    long long int a = 0;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", Fibonacci(n));
    return 0;
}