// A number that has 3 divisors will be a perfect square number whose root is a prime number
//generating number from 1 to n that has 3 divisor

#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sr;
	cin >> n;

	sr = sqrt(n);
	vector<bool> prime(sr+1, 1);

	prime[0] = 0;
	prime[1] = 0;

	for(int i=2; i<=sr; i++){
		if(prime[i]==1){
			cout << i*i << "\n";
			if(i*i<=sr){
				for(int j=i*i; j<=sr; j+=i){
					prime[j] = 0;
				}
			}
		}
	}

	return 0;
}
