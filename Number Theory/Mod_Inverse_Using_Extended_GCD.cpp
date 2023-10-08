// calculating mod inverse using extended gcd algorithm
// modInverse of a under modulo m exist when a and m are co-prime

#include <bits/stdc++.h>
using namespace std;

int ext_gcd(int a, int b, int &x, int &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}

	int g, x1, y1;
	g = ext_gcd(b, a % b, x1, y1);

	x = y1;
	y = x1 - (a / b) * y1;

	return g;
}

int modInverse(int a, int m) {
	int x, y;
	int g = ext_gcd(a, m, x, y);

	if (g != 1) return 0; 	//a and m are not co-prime so gcd not equal to 1. ModInverse doesn't exists
	
	x = (x + m) % m;

	return x;
}
