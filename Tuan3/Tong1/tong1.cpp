#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);

    long int sum = 0 ;
    for (int i = 0 ; i < n ; i ++) {
        if ((i % a == 0) && (i%b !=0))
            sum += i;  
    }
    printf("%ld", sum);
    return 0;

}