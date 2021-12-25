// calculate nCr for large value under modulo p
// n, r <= 10^5
// p = 10^9 + 7
// main idea : nCr = ( n! * (n-r)!^-1 * r!^-1 ) % p

#include <bits/stdc++.h>
using namespace std;

#define	ll	long long
#define	ull	unsigned long long

#define maxN 	100001
#define p 	100000007

vector<ll> fact(maxN), invMod(maxN);

ll factModInverse(int n){
	return (invMod[n-1] * invMod[n])%p;
}

void fillInvMod(){
	invMod[0] = invMod[1] = 1;

	for(int i=2; i<maxN; i++){
		invMod[i] = p - ( ((p/i) * invMod[p%i]) % p);
	}
}

void preCompute(){
	fillInvMod();

	fact[0] = fact[1] = 1;

	for(int i=2; i<maxN; i++){
		fact[i] = (fact[i-1] * (ll)i) % p;
		invMod[i] = factModInverse(i);
	}
}

ll query(int n, int r){
	ll ans = ( ((fact[n] * invMod[n-r])%p) * invMod[r] )%p;
	return ans;
}

void solve(){
	preCompute();
	int n, r, q;
	cin >> q;
	while(q--){
		cin >> n >> r;
		cout << query(n, r) << "\n";
	}
}
