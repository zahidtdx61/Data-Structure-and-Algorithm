// nCr with large value under mod p
// n, r >= 10^5
// p = 10^9 + 7
// nCr = ( n! * (n-r)!^-1 * r!^-1 ) % p

#include <bits/stdc++.h>
using namespace std;

#define	ll	long long
#define	ull	unsigned long long

#define	p	1000000007

ll modInverse(int n){
	ll m = p-2, ans = 1, term = (ll)n;

	while(m){
		if(m&1){
			ans = (ans*term)%p;
		}
		term = (term*term)%p;
		m >>= 1;
	}

	return ans;
}

ll fact(int n){
	ll ans = 1;
	for(ll i=2; i<=(ll)n; i++){
		ans = (ans*i)%p;
	}

	return ans;
}

int nCr(int n, int r){
	if(r==1){
		return n;
	}else if((n==r) || (r==0)){
		return 1;
	}

	ll a, b, c, res=1;

	a = fact(n);
	b = fact(n-r);
	c = fact(r);

	b = modInverse(b);
	c = modInverse(c);

	res = (((a*b)%p)*c)%p ;

	return (int)res;
}

void solve(){
	int n, r, a, b, c;
	cin >> n >> r;

	cout << nCr(n, r) << "\n";
}
