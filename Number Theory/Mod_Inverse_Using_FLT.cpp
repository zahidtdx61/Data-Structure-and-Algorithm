// finding modular inverse using fermarts little theorem
// to get (1/a)%m we have to calculate (a^(m-2)) % m 

#include <bits/stdc++.h>
using namespace std;

long long modInverse(long long a, long long m) {
	long long res = 1, mul = a, mod = m;
	m = m-2;

	while (m) {
		if (m & 1) { res = (res * mul) % mod;}
		mul = (mul * mul) % mod;
		m >>= 1;
	}
	
	return res;
}
