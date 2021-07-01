#include <bits/stdc++.h>
using namespace std;

#define max 100000
#define ll long long
//vector<int> least_prime(max+1, 0);

void fillLeastPrime(vector<int> &least_prime){
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
	//fill(least_prime.begin(), least_prime.end(), 0);
	
	fillLeastPrime(least_prime);
	int tc;
	cin >> tc;
	
	while(tc--){
		int n, count=1, prev, res=1;
		cin >> n;
		if(n==1){
		    cout << 1 << "\n";
		    continue;
		}
		prev = least_prime[n];
		n = n/prev;
		while(n>1){
			if(least_prime[n] == prev){
				count++;
			}else{
				prev = least_prime[n];
				res = res*(count+1);
				count = 1;
			}
			n /= prev;
		}
		res = res*(count+1);
		cout << res << "\n";
	}

	return 0;
}
