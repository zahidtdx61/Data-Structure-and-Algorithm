//this function will return the list of all prime factor of N
vector<int> primeFactors(int n){
	vector<int> pFactorList;
	if(n<=1){
		return pFactorList;
	}

	//checking if 2 is factor
	while((n%2) == 0){
		n /= 2;
		pFactorList.push_back(2);
	} 
	//checking if 3 is factor
	while((n%3) == 0){
		n /= 3;
		pFactorList.push_back(3);
	}

	//checking for other
	for(int i=5; i*i<=n; i+=6){
		while((n%i) == 0){
			n /= i;
			pFactorList.push_back(i);
		}
		while((n%(i+2)) == 0){
			n /= (i+2);
			pFactorList.push_back(i+2);
		}
	}

	if(n>3){
		pFactorList.push_back(n);
	}

	return pFactorList;
}
