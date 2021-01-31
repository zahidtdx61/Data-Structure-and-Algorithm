//Generating all prime number & counting their amount in a given range

#include <bits/stdc++.h>
using namespace std;

int seive(vector<int> &num , int n)
{
    int countPrime=0;
    num[0] = 1;
    num[1] = 1;     // remove 0 and 1 from prime number list
    for(int i=4; i<=n; i+=2){
        num[i] = 1;             // removed all even number(except 2) from out list of prime number
    }
    countPrime++;  // include 2 as prime
    int limit = sqrt(n*1.0) + 2;
    for(int i=3; i<=n; i+=2){
        
        if(num[i] == 0){  // taking a number and removing all mutiple of that number becauses multiples are not prime
            countPrime++;
            if(i<=limit){   //if we don't do this i*i may overflow
                for(int j=i*i; j<=n; j+=i*2){
                    num[j] = 1;
                }
            }
            
        }
    }
                      // after run this whole loop all prime numbers(as index) are marked as 0
    return countPrime;  // total count of prime numver
}


int main()
{
    int n,totalPrime;
    cout << "Enter the range: ";
    cin >> n;
    vector<int> v(n);
    
    totalPrime = seive(v,n);
    cout << "\nTotal Prime: " << totalPrime << "\nPrime number from 0 to " << n << " is below:\n";
    for(int i=0; i<=n; i++){
        if(v[i]==0){
            cout << i << "\n"; // index is indicating number. Index having value 0 are indicating prime number.
                                // so printing value of index as ther are prime number
        }
    }
    
    return 0;
    
}
