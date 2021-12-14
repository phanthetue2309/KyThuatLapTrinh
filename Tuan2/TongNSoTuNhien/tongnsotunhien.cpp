#include <stdio.h>
int main()
{
    long n;
    scanf("%ld", &n);
    long sum = 0 ; 
    for (int i = 0 ; i <= n ; i++)
        sum += i ; 
    printf("%ld",sum);
    return 0;
}
