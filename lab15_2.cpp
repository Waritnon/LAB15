#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[N][N]){
    for(int j = 0;j < N;j++){
	for(int i = 0;i < N;i++){
		cout << A[j][i] << ' ';
	}
	cout << endl;
	}
	return;
}

void inputMatrix(double A[N][N]){
	for(int i = 1;i < 6;i++){
	cout << "Row " << i << ": ";
	cin >> A[i-1][0] >> A[i-1][1] >> A[i-1][2] >> A[i-1][3] >> A[i-1][4]; 
		}
	return;	
	}

void findLocalMax(const double A[N][N], bool B[][N]){
	for(int n = 0;n < 5;n++){
		B[n][0] = 0;
		B[0][n] = 0;
		B[4][n] = 0;
		B[n][4] = 0;
	}
	for(int i = 1;i < 4;i++){
		for(int j =1;j < 4;j++){
			if(A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1] && A[i][j] >= A[i+1][j] && A[i][j] >= A[i-1][j]) B[i][j] = 1;
			else B[i][j] = 0;
		}
	}
	return;
}