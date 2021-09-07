#define		Matrix		vector<vector<int>>
#define		MatSize(R, C)	(((int)R), vector<int>(((int)C)))
#define		MatSqSize(n)	(((int)n), vector<int>(((int)n)))

Matrix matMul(Matrix &a, Matrix &b){
	int r1 = a.size(), c1 = a[0].size();
	int r2 = b.size(), c2 = b[0].size();

	Matrix product MatSize(r1, c2);
	
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			for(int k=0; k<r2; k++){
				product[i][j] += (a[i][k]*b[k][j]);
			}
		}
	}
	return product;
}
