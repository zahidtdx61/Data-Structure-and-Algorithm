//nCr space optimized

int nCr(int n, int r){
	vector<int> NCR(r+1);

	NCR[0] = 1;

	for(int i=1; i<=n; i++){
		for(int j=min(i, r); j>0; j--){
			NCR[j] = NCR[j]+NCR[j-1] ;
		}
	}

	return NCR[r];
}

void solve(){
	int n, r;
	cin >> n >> r;


	int ans = nCr(n, r);

	cout << n << "C" << r << " : " << ans << "\n";
}
