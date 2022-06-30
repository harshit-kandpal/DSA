#include<iostream>
using namespace std;

void fibonacci(int secound,int first,int number){
  if(number == 0){
    return;
  }  
  int newDigit = secound+first;
  cout<<newDigit;
  fibonacci(first,newDigit,number-1);
  
  
}

int main(){
  int number;
  cin>>number;
  
  fibonacci(0,1,number);
 
  return 0;
  
}
