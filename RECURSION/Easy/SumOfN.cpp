#include<iostream>
using namespace std;


// print number from given number to 1
void printSum(int number,int sum){
	if(number <= 0){
		cout<<sum;
	}
	sum+=number;
	printSum(number-1,sum);
}


int main(){
	int number;
	cout<<"Enter the number"<<endl;
	cin>>number;

	cout<<"sum of number till value "<<number<<" is ";
	printSum(number,0);
	
	return 0;
}
