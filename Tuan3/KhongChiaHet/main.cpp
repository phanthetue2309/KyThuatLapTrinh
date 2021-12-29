#include <stdio.h>

long int
solve(long int k, long int n)
{
    long int x = k / (n - 1) * n - 1;
    long int r = k % (n - 1);
    return r == 0 ? x : x + r + 1;
}

int main()
{

    int q;
    scanf("%d", &q);
    while (q > 0)
    {
        long int n, k;
        scanf("%ld%ld", &n, &k);
        printf("%ld\n", solve(k, n));
        --q;
    }
    return 0;
}