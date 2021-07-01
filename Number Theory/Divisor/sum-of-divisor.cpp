#include <iostream>
using namespace std;

int sumOfDiv(int n){
	int res=1;
	for(int i=2; i*i<=n; i++){
		int term=1;
		int sum=1;
		while(n%i == 0){
			term *= i;
			sum += term;
			n /= i;
		}
		res *= sum;
	}

	if(n>1){
		res *= (1+n);
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << sumOfDiv(n) << "\n";

	return 0;
}
