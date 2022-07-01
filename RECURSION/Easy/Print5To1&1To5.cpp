#include<iostream>
using namespace std;


// print number from given number to 1
void print_n_to_1(int number){
	if(number==0){
		cout<<endl;
		return;
	}
	cout<<number<<" ";
	print_n_to_1(number-1);
}

// print number from 1 to given number 
void print_1_to_n(int number,int printNumber){
	if(printNumber>number){
		cout<<endl;
		return;
	}
	cout<<printNumber<<" ";
	print_1_to_n(number,printNumber+1);
}

int main(){
	int number;
	cout<<"Enter the range"<<endl;
	cin>>number;
	
	cout<<"Printing from given number to 1"<<endl;
	print_n_to_1(number);
	cout<<"Printing from 1 to given number"<<endl;
	print_1_to_n(number,1);
	
	return 0;
}
