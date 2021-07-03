#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int phi[n+1];
	phi[0] = 0;
	phi[1] = 1;
	phi[2] = 1;

	for(int i=3; i<=n; i++){
		phi[i] = i-1;
	}

	cout << "Phi(1): " << phi[1] << "\n";
	for(int i=2; i<=n; i++){
		for(int j=i+i; j<=n; j+=i){
			phi[j] = phi[j]-phi[i];
		}
		cout << "Phi(" << i << "): " << phi[i] << "\n";
	}
	
	return 0;
}
