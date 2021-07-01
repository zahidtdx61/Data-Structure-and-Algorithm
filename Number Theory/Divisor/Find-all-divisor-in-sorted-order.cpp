#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n){
	int i;
	for(i=1; i*i<=n; i++){
		if(n%i == 0){
			cout << i << " ";// << (n/i) << " ";
		}
	}
	if(n==1){
		cout << "\n";
		return ;
	}
	i--;
	for(;i>0; i--){
		if(n%i == 0){
			cout << (n/i) << " ";
		}
	}
	cout << "\n";
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		cout << "Divisor of " << n << " : ";
		printDivisor(n);
		cout << "\n";
	}

	return 0;
}
