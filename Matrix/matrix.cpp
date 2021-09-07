#define		Matrix          vector<vector<int>>
#define		MatSize(R, C)   ((R), vector<int>((C)))
#define		MatSqSize(n)    ((n), vector<int>((n)))

//define a matrix : Matrix Matrix_Name MatSize(row, col);
//define square matrix: Matrix Matrix_Name MatSqSize(N);

void inputMatrix(Matrix &M){
	for(int i=0; i<M.size(); i++){
		for(int j=0; j<M[i].size(); j++){ cin >> M[i][j];}
	}
}

void printMatrix(Matrix &M){
	for(int i=0; i<M.size(); i++){
		for(int j=0; j<M[i].size(); j++){
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}
}
