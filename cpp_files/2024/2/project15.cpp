#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()
using namespace std;

class MultiArray{
	public:
		int arr1[10][10], arr2[10][10], res[10][10] , rows ,cols;
		void get(){
			cout<<"Enter rows and cols: ";rows = 3;cols = 3;cout<<rows<<" "<<cols<<"\n";
			cout<<"Enter First matrix:\n";
			for(int i = 0; i < rows ; i++ ) {
				for(int j = 0 ; j < cols ; j++){
					arr1[i][j] = rand() % 20 + 3;		
				} 
			}
			for(int i = 0; i < rows ; i++ ) for(int j = 0 ; j < cols ; j++) arr2[i][j] = rand() % 30 + 3;
		}
		
		void display(int mat[10][10]){
			for(int i = 0 ; i < rows ; i++ , cout<<endl) for (int j = 0 ; j < cols ; j++ ) cout<< mat[i][j]<<" ";
		}
		
		void multiply(){
			for(int i = 0 ; i < rows ; i++){
				for(int j = 0 ; j<cols ; j++){
					res[i][j] = 0;
					for(int k = 0; k<cols ; k++) res[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
			
			cout<<"Resultant Matrix: \n";
			display(res);
		}
};

int main(){
	MultiArray  ob;
	ob.get();
	cout<<"First matrix: \n";ob.display(ob.arr1);
	cout<<"Second matrix: \n";ob.display(ob.arr2);
	ob.multiply();
	
	return 0;
}
