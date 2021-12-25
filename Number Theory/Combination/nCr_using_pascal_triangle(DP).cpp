//calculate nCr

int nCr(vector<vector<int>> &NCR){
	int n = ((int)NCR.size()) - 1;
	int r = ((int)NCR[0].size()) - 1;

	NCR[0][0] = 1;
	NCR[1][0] = NCR[1][1] = 1;

	for(int i=2; i<=n; i++){
		for(int j=0; j<=min(i, r); j++){
			if(j==0 || j==i){
				NCR[i][j] = 1;
			}else{
				NCR[i][j] = NCR[i-1][j-1] + NCR[i-1][j];
			}
		}
	}

	return NCR[n][r];
}

void solve(){
	int n, r;
	cin >> n >> r;

	vector<vector<int>> res(n+1, vector<int> (r+1));

	int ans = nCr(res);

	cout << n << "C" << r << " : " << ans << "\n";
}
