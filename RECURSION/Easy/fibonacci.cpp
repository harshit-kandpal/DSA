#include<iostream>
using namespace std;

void fibonacci(long long secound,long long first,int number){
  if(number == 0){
    return;
  }  
  long long newDigit = secound+first;
  cout<<newDigit<<" ";
  fibonacci(first,newDigit,number-1);
  
  
}

int main(){
  int number;
  cin>>number;
  cout<<"0 1 ";
  fibonacci(0,1,number);
 
  return 0;
  
}

