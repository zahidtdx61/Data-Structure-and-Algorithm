#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int res=n;
	for(int i=2; i*i<=n; i++){
		if(n%i == 0){
			while(n%i == 0){
				n /= i;
			}
			res = (res/i)*(i-1);
		}
		
	}
	if(n>1){
		res = (res/n)*(n-1);
	}
	cout << res << "\n";

	return 0;
}
