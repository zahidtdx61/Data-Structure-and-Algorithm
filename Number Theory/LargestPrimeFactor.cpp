int largestPrimeFactor(int n){
    int maxVal = 0;
        
    while(n%2 == 0){
        n /= 2;
        maxVal = 2;
    }
        
    for(int i=3; i*i<=n; i+=2){

        while(n%i == 0){
            maxVal = max(maxVal,i);
            n /= i;
        }
    }
        
    if(n>2){
        maxVal = max(maxVal,n);
    }
        
    return maxVal;
}
