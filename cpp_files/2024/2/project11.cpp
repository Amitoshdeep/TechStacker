#include<iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int main(){
	int(*funcPtr)(int , int) = add;
	cout<<"sum is: "<<funcPtr(10,5);
	
	return 0;
}
