#include <stdio.h>

long long c(int k, int n)
{
    long long a[100][100];
    if (k == 0 || k == n)
        return 1;
    else
        for (int i = 0; i <= k; i++)
            for (int j = i; j <= n; j++)
                if (i == 0 || i == j)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i][j - 1] + a[i - 1][j - 1];

    return a[k][n];
}

int main()
{
    int k, n;
    scanf("%d%d", &k, &n);
    if (k > n || k * n < 0)
        return 1;

    else

        printf("%lld", c(k, n));
}