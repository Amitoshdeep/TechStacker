#include<iostream>
using namespace std;

class Number{
	static int staticVar;
	int nonStaticVar;
	
	public:
		void get(int val){
			nonStaticVar = val;
		}
		void display(){
			cout<<"\nStatic Variable: "<<staticVar<<"\tNon-Static Variable: "<<nonStaticVar;
		}
		void incriment(){
			staticVar++;
			nonStaticVar++;
		}
};
int Number::staticVar = 0;

int main(){
	Number ob1,ob2,ob3,ob4,ob5;
	ob1.get(10);ob2.get(20);ob3.get(40);ob4.get(30);ob5.get(50);
	
	cout<<"Initial Values: ";
	ob1.display();ob2.display();ob3.display();ob4.display();ob5.display();
	
	ob1.incriment();ob2.incriment();ob3.incriment();ob4.incriment();ob5.incriment();
	
	cout<<"\n\nValues after incrimenting: ";
	ob1.display();ob2.display();ob3.display();ob4.display();ob5.display();
}
