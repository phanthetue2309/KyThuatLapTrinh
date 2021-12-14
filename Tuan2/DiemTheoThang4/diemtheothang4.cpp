#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if ( n >= 8.5) {
        printf("4.0");
    }
    else if ( 8 <= n && n < 8.5) {
        printf("3.5");
    }
    else if ( 7 <=n && n < 8) {
        printf("3.0");
    }
    else if (6.5 <= n && n < 7) {
        printf("2.5");
    } 
    else if (5.5 <= n && n < 6.5) {
        printf("2.0");
    }
    else if (5.0 <= n && n < 5.5) {
        printf("1.5");
    }
    else if (4.0 <= n && n < 5.0) {
        printf("1.0");
    }
    else printf("0.0");
    return 0;
}
