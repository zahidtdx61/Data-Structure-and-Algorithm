#include <bits/stdc++.h>
using namespace std;

int bigmod(int num, int base, int mod)
{
    if(base == 0){
        return 1%mod;
    }
    int x = bigmod(num, base/2, mod);
    
    x = (x*x)%mod;
    if((base%2) == 1){
        x = (x*num)%mod;
    }
    
    return x;
}

int main() {
	int num, base, mod;
	cin >> num >> base >> mod;
	cout << bigmod(num, base, mod);
	return 0;
}
