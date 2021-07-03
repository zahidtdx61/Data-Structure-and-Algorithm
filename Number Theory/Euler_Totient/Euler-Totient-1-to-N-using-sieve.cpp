#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int phi[n+1];
	for(int i=0; i<=n; i++){
		phi[i] = i;
	}
	cout << "Phi(1): " << phi[1] << "\n";
	for(int i=2; i<=n; i++){
		if(phi[i]==i){
			phi[i] = i-1;
			for(int j=2*i; j<=n; j+=i){
				phi[j] = (phi[j]/i)*(i-1);
			}
		}
		cout << "Phi(" << i << "): " << phi[i] << "\n"; 
	}

	return 0;
}
