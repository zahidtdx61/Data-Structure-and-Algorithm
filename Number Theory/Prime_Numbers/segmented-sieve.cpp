#define ll long long
//generate all prime number in range L to R
vector<ll> seg_sieve(ll L, ll R){
    ll n = sqrt(R);
    vector<ll> isPrime(n+1, 1), primeInRange(R-L+1, 1), prime;
    
    //generating all prime number from 0 to sqrt(R)
    for(ll i=2; i<=n; i++){
        if(isPrime[i]){
            prime.push_back(i);  //storing every prime number
            if(i*i <= n){
                for(ll j=i*i; j<=n; j+=i){
                    isPrime[j] = 0;
                }
            }
        }
    }
    
    //now removing multiples of every prime which are in range of L to range
    for(ll p:prime){
        //getting smallest multiple of prime number greater or equal to L
        ll sm = (L/p)*p;
        if(sm<L){
            sm += p;
        }
        for(ll j=sm; j<=R; j+=p){
            primeInRange[j-L] = 0;
        }
        if(sm==p){
            primeInRange[sm-L] = 1;
        }
        if(L==1){
            primeInRange[0] = 0;
        }
    }
    
    return primeInRange;
    
}
