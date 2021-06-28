//all prime number will be marked as true in prime vector according to index
//we can get prime number till n

void sieve(vector<bool> &prime, int n){
    prime[0] = 0;
    prime[1] = 0;
    
    int limit = sqrt(n*1.0)+2;
    //marking every prime number as true and their multiple as false
    for(int i=2; i<=n; i++){
        //if i is prime then it must be mark as true
        if(prime[i]){
            if(i<=limit){   
                for(int j=i*i; j<=n; j+=i){
                    prime[j] = 0;   //multiple of prime number marked as false;
                }
            }
        }
    }
}
