#include <stdio.h>
#include <math.h>

int gcd(long int a, long int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
int main(){
    long long int a,b,n;
	int s = 0;
	do {
		scanf("%ld", &a);
	}
	while(a < 1 || a > pow(10,18));
	do {
		scanf("%ld", &b);
	}
	while(b < 1 || b > pow(10,18));
	printf("%d",gcd(a,b));
	
}