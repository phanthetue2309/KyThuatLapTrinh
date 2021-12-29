#include <stdio.h>
#include <math.h>

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

int main(){
    long long int n,a,b;
	long long int count = 0;
    do {
    	scanf("%lld", &n);
	}
	while(n < 1 || n > pow(10,9));
	 do {
    	scanf("%lld", &a);
	}
	while(a < 1 || a > pow(10,9));
	 do {
    	scanf("%lld", &b);
	}
	while(b < 1 || b > pow(10,9));

    if (a == 1 || b == 1) {
        printf("%lld", n);
        return 0;
    }
    long long int divisibleByA = n / a;
    long long int divisibleByB = n / b;
    long long int LCM = (a * b) / gcd(a, b);
    long long int divisibleByLCM = n / LCM;
    long long int divisibleByAorB = divisibleByA + divisibleByB - divisibleByLCM;
	printf("%lld", divisibleByAorB);
    return 0;
}