#include<iostream>
using namespace std;

int main(){
	float num1 , num2 , res;
	char op;
	int temp;
	
	cout<<"Enter The Num1: ";
	cin>>num1;
	
	cout<<"Enter The Num2: ";
	cin>>num2;
	
	do{
		
	cout<<"\nEnter OP ( + , - , * , / , E(Equality), I(Incriment) , D(Decriment) , 7 (exit) ): ";
	cin>>op;
	
	
	
	switch(op){
		case '+':
			res = num1 + num2 ;
			cout<<"\n Sum -> "<< res;
			break;
		case '-':
			res = num1 - num2;
			cout<<"\n Sub -> "<<res;
			break;
		case '*':
			res = num1 * num2;
			cout<<"\n Mult -> "<<res;
			break;
		case 'E':
			if(num1 == num2)
				cout<<"\n Equal";
			else{
				cout<<"Not Equal";
			}
			break;
		case 'I':
			
			cout<<"Enter the Num for incriment (1 or 2): ";
			cin>>temp;
			
			if(temp == 1){
				cout<<"\n incriment of Num1: "<<++num1;
			}else if(temp == 2){
				cout<<"\n incriment of Num2: "<<++num2;
			}
			break;
		
		case 'D':
			cout<<"Enter the Num for Decriment (1 or 2): ";
			cin>>temp;
			
			if(temp == 1){
				cout<<"\n incriment of Num1: "<<--num1;
			}else if(temp == 2){
				cout<<"\n incriment of Num2: "<<--num2;
			}
			break;
		
		case '7':
			exit(0);
			break;
				
		default:
			cout<<"wrong OP";
		}
	}while(op != '7');
	
	return 0;	
}
