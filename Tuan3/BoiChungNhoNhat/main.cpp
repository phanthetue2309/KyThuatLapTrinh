#include <stdio.h>


int gcd(long long int a, long long int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    long long int a, b;
    scanf("%ld", &a);
    scanf("%ld", &b);

    long long int lcm = a * b / gcd(a, b);
    printf("%ld",lcm);
}
