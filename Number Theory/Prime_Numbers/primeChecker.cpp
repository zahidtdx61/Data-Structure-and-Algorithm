bool isPrime(int n){
    // at first checking the corner case
    if(n==1)    return 0;
    if((n==2) || (n==3))    return 1;
    else if((n%2 == 0) || (n%3 == 0))   return 0;
    
    //if n is not prime then it will be divisible by i or i+2
    for(int i=5; i*i<=n; i+=6){
        if((n%i==0) || ((n%(i+2)) == 0)){
            return 0;
        }
    }
    
    //now we can say n is not divisible ny any number. So, it is a prime nnumber.
    return 1;
}
