#include<iostream>
using namespace std;
bool isPrime(int arr[],int size)
{
	for(int i = 2; i < size; i++)
		if(arr[i] % i == 0)
			return true;
	return false;

}
bool check_digit(char str[], int size)
{
	for(int i = 0; i < size;i++)
		if(str[i] >= '0' && str[i] <= '9')
			return true;
	return false;

}
int** create_matrix( const int r, const int c)
{
	int** matrix = new int*[r];
	for( int i = 0; i < r;i++)
		matrix[i] = new int[c];
	return matrix;

}
void populate_matrix(int** m,const int r , const int c)
{
	for( int i = 0; i < r;i++)
		for(int j = 0; j < c;j++)
			m[i][j] = rand() % 6;
	return;

}


int** matrix_sum(int**m1,int**m2,int rows,int columns)
{
	int** answer = create_matrix(3,3);
	for(int i = 0; i < rows;i++)
		for(int j = 0;j < columns;j++)
			answer[i][j] = m1[i][j] + m2[i][j];
	return answer;

}
//Precondition = arguement matrix is a square matrix (r=c)
bool identity_matrix( int** m, const int size)
{
	for(int i = 0; i < size;i++)
		for(int j = 0; j < size;j++)
			if(i==j && m[i][j] !=1)
				return false;
			else if(m[i][j] !=0)
				return false;
	return true;



}
void printMatrix(int **M, const int R, const int C)
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
}
int ** dot_product( int** m , int**m2,const int r1,const int c2)
{

	int** answer = create_matrix(r1,c2);
	for(int i = 0; i < r1;i++)
		for(int j = 0; j < c2;j++)
			answer[i][j] += m[i][j]*m2[j][i];
	return answer;

}
int main()
{

	 int**m = create_matrix(2,3);
	 int**m2 = create_matrix(3,2);
	 for(int i = 0; i < 2; i++)
	 {
		 for(int j = 0; j < 3;j++)
		 {
			 cin >> m[i][j]; 
		 
		 }
 
	 }
	 cout << " now time for m2" << endl;
	 
	for(int i = 0; i < 3; i++)
	 {
		 for(int j = 0; j < 2;j++)
		 {
			 cin >> m2[i][j]; 
		 
		 }
 
	 }
	 
	 int** answer = dot_product(m,m2,2,2);
	  printMatrix(answer,2,2);


	 /*for( int i = 0; i < 3; i++)
	 {
		 for(int j = 0; j < 3;j++)
			 cout << m[i][j] << '\t';
	 cout << endl;
	 }
	 cout << endl;
	 for( int i = 0; i < 3; i++)
	 {
		 for(int j = 0; j < 3;j++)
			 cout << m2[i][j] << '\t';
	 cout << endl;
	 }
	 cout << endl;
	 int** ans = matrix_sum(m,m2,3,3);
	 for( int i = 0; i < 3; i++)
	 {
		 for(int j = 0; j < 3;j++)
			 cout << ans[i][j] << '\t';
	 cout << endl;
	 }
		
		 
	 */


 
	system("pause");
	return 0;


}
