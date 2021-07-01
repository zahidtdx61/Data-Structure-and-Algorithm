#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, count=2;	//because 1 & n is two divisor
	cin >> n;

	for(int i=2; i*i<=n; i++){
		if(n%i == 0){
			if((n/i) == i){
				count++;
			}else{
				count += 2;
			}
		}
	}

	cout << count << "\n";

	return 0;
}
