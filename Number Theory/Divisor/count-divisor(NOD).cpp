#include <bits/stdc++.h>
using namespace std;

int NOD(int n){
	int nod = 1;
	
	for(int i=2; i*i<=n; i++){
		int count = 0;
		while(n%i == 0){
			n /= i;
			count++;
		}
		nod = nod*(count+1);
	}
	if(n>1){
		nod *= 2;
	}

	return nod;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << NOD(n) << "\n";

	return 0;
}
