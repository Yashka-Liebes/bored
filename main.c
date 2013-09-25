#include <stdio.h>
#include <stdlib.h>
#include "string.h"



#define INVALID inttostring(-1, 1);



/* function prototype */
String devidemagick(int n, int s);
int numberofdigits(int n);
int power(int base, int exponent);
int valid(int n);



int main() {
	devidemagick(247, 1);

	return 0;
}

String devidemagick(int n, int s) {
	String r;
	int k, d, i;

	if (!valid(n))
		return INVALID;

	d = numberofdigits(s);
	k = power(10, d);

	for (r = inttostring(s, d), i = 1; isdevided(r, n); r = inttostring(multiply(r, k) + s, ++i * d))
		;

	return r;
}

int valid(int n) {
	int m;

	m = n % 10;

	return m == 1 || m == 3 || m == 7 || m == 9;
}

int numberofdigits(int n) {
	int k = 0;

	while (n /= 10)
		k++;

	return k + 1;
}

int power(int b, int exp) {
	if (exp == 0)
		return 1;

	return b * power(b, exp - 1);
}
