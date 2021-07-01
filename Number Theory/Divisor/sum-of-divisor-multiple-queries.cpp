#include <bits/stdc++.h>
using namespace std;

#define max 100000
#define ll long long

void fillLeastPrime(vector<int>& least_prime){
	least_prime[0] = 0;
	least_prime[1] = 1;

	for(ll i=2; i<=max; i++){
		if(least_prime[i]==0){
			least_prime[i] = i;
			if(i*i <= max){
				for(ll j=i*i; j<=max; j+=i){
					if(least_prime[j]==0){
						least_prime[j] = i;
					}
				}
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> least_prime(100001, 0);
	
	fillLeastPrime(least_prime);
	int tc;
	cin >> tc;
	
	while(tc--){
		int n;
		cin >> n;
		if(n==1){
		    cout << 1 << "\n";
		    continue;
		}
		
		int res = 1, sum = 1, term=1, factor = least_prime[n];
		n /= factor;
		term *= factor;
		sum += term;
		while(n>1){
			if(factor == least_prime[n]){
				term *= factor;
				sum += term;
			}else{
				factor = least_prime[n];
				res *= sum;
				term = factor;
				sum = 1+factor;

			}
			n /= factor;
		}
		res *= sum;
		cout << res << "\n";
	}

	return 0;
}
