// extended gcd algorithm
// ax + by = gcd(a, b) , euch eqn. can be solved using this algorithm

#include <bits/stdc++.h>
using namespace std;

int ext_gcd(int a, int b, int &x, int &y) {
	if (b == 0) {						// base case
		x = 1;
		y = 0;
		return a;
	}

	int x1, y1, g;
	g = ext_gcd(b, a % b, x1, y1);	  // recursively calculating gcd, x and y from previous step

	x = y1;							// calculating x and y for current step
	y =  x1 - (a / b) * y1;

	return g;
}

int main()
{
	int a, b, x, y, g;
	cin >> a >> b;

	g = ext_gcd(a, b, x, y);
	cout << g << " " << x << " " << y << "\n";
	return 0;
}
