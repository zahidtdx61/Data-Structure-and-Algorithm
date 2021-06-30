//this function will return list of smallest prime factor 1 to n
vector<int> smPrimeFactor(int &n){
	vector<int> factors(n+1, 0);

	//this algorithm is quite similler to sieve algorithm
	//instead of marking as 0 or 1 unlike sieve we will
	//mark number with its smallest multiple.
	//Ex. if i=2 then we will set 2 as value of all multiple of 2
	//1 will be handeled explicitly
	factors[1] = 1;
	for(int i=2; i<=n; i++){
		if(factors[i]==0){
			factors[i]=i;
			if(i*i <= n){
				for(int j=i*i; j<=n; j+=i){
					if(factors[j]==0){
						factors[j]=i;
					}
				}
			}
		}
	}

	return factors;
}
