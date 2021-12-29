#include <stdio.h>
#include <math.h>

int songuyento(int n)
{
    int i;
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    else
        for (i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return 0;
    return 1;
}

int main()
{
    int i, n;
    scanf("%d", &n);
    if (songuyento(n)==1)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}