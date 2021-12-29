#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (long int i = 0; i < n * n; i++)
    {
        if ((i % 2 == 0) || (i % 3 == 0))
            sum += 1;
    }
    printf("%d", sum);
    return 0;
}