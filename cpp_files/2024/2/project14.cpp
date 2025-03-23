#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()
using namespace std;

class ArrayOps{
	int arr[100] , size;
	public:
		ArrayOps():size(0){}
		void get(){
			cout<<"\nEnter Number of elements: 5 ";size = 5;
			cout<<"\nEnter Elements:";
			for(int i = 0; i < size ; i++)arr[i] = rand() % 20 + 5;
			for(int i=0 ; i < size ; i++) cout<<arr[i]<<" ";
		}
		void display(){
			cout<<"\nArray: ";
			for(int i=0 ; i < size ; i++) cout<<arr[i]<<" ";
			cout<<endl;
		}
		void findlargest(){
			if(size == 0 )return void(cout<<"\nArray is Empty!\n\n");
			int max = arr[0];
			for(int i=0 ; i < size ; i++) if(arr[i]>max)max = arr[i];
			cout<<"largest: "<<max<<endl;
		}
		void insertElement(){
			if(size >= 100) return void(cout<<"\nArray Full!\n");
			int pos,val;
			cout<<"\nEnter position(0-"<<size<<") and value: ";
			pos=rand() % 5;
			val = rand() % 20 + 30;
			if(pos< 0 || pos > size)return void(cout<<"\nInvalid position!\n");
			for(int i = pos; i<size - 1 ; i++)arr[i] = arr[i + 1];
			size--;
		}
};

int main(){
	ArrayOps ob;
	int choice = 1;
	int t = 0;
	while(t>5){
		cout<<"\n\n1.Enter elements 2.Display 3.largest 4.Insert 5.Delete 6.Exit \nChoice: ";
		
		if(choice == 6){
			cout<<choice;
			break;	
		}
		if(choice == 5)continue;
		
		cout<<choice<<"\n";
		switch(choice){
			case 1: ob.get(); break;
			case 2: ob.display(); break;
			case 3: ob.findlargest(); break;
			case 4: ob.insertElement(); break;
			default:cout<<"Invalid choice!\n";
		}
		
		do {
    		choice = rand() % 7 + 1; // Generates numbers between 0 and 6
		} while (choice == 5);  // Excludes 5
		
		t++;
	}
	
}
