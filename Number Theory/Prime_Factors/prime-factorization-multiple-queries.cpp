#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> smallestPrimeFactors(1000001, 0);
	int n = 1000000;
	smallestPrimeFactors[1] = 1;
	for(int i=2; i*i<=n; i++){
		if(smallestPrimeFactors[i]==0){
			smallestPrimeFactors[i]=i;
			if(i*i <= n){
				for(int j=i*i; j<=n; j+=i){
					if(smallestPrimeFactors[j]==0){
						smallestPrimeFactors[j]=i;
					}
				}
			}
		}
	}

	int query;
	cin >> query;
	while(query--){
		int num;
		cin >> num;
        
		while(num>1){
			cout << smallestPrimeFactors[num] << " ";
			num /= smallestPrimeFactors[num];
		}
		cout << "\n";

	}

	return 0;
}
