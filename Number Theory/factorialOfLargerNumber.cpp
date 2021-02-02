// find factorial of a large number

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int multiply(int num[], int numSize, int x);
void factOutput(int arr[], int arrSize);
void factorial(int  number);

// multiply a number (which is stored in reverse order in array) with x and return the of size new number
// new number alse stored in array in reversed manner
// we will store the number in reversed order

int multiply(int num[], int numSize, int x)
{
    int carry = 0;
    for(int i=0; i<numSize; i++){
        int mul = (num[i]*x) + carry ;
        num[i] = mul % 10;      //storing a digit a specific position
        carry = mul / 10;       //storing carry to add with next digit
    }
    //now will increase and store next digit if carry exist
    while(carry){
        num[numSize] = carry % 10 ;
        carry = carry / 10 ;
        numSize++;
    }
    
    return numSize;
}

void factOutput(int arr[], int arrSize)
{
    for(int i=arrSize-1; i>=0; i--){
        cout << arr[i];
    }
    cout << "\n";
}

void factorial(int  number)
{
    int arr[MAX];
    arr[0] = 1;
    int factSize = 1;
    //we will serially multiply all number from 2 to number
    // and this is the factorial of given number n;
    // n! = 1*2*3*....*(n-2)*(n-1)*n
    for(int i=2; i<=number; i++){
        factSize = multiply(arr, factSize, i);
    }
    
    //output of factoril of a given number
    factOutput(arr, factSize);
}

void calculation()
{
    int num;
    cin >> num;
    factorial(num);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    calculation();
    
    return 0;
}
