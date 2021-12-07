#include <stdio.h>

int main()
{
    char ky_tu;
    scanf("%c", &ky_tu);
    int x = (int)ky_tu;
    if (x != 27) {
        printf("%d", ky_tu);
    }

    return 0;
}