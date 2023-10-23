// binary multiplication to multiply two large number under mod m

long long multiply(long long a , long long b, long long mod) {
	if (a > b) swap(a, b);
	if (a == 0) return 0;
	if (a == 1) return b % mod;

	a %= mod;
	b %= mod;
	long long ans = 0;
	while (a) {
		if (a & 1) {
			ans += b;
			ans %= mod;
		}
		b += b;
		b %= mod;
		a /= 2;
	}

	return ans;
}
