// find gcd of two number using euclid algo

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int temp1, temp2;
    while(b!=0){
        temp1 = b;
        temp2 = a%b;
        
        a = temp1;
        b = temp2;
    }
    
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << gcd(a,b) << endl;
    
    return 0;
}
