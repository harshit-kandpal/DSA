#include<iostream>
using namespace std;

void factorial(int n,int fact){
  if(n==0){
    cout<<fact;
    return;
  }
  fact*=n;
  factorial(n-1,fact);
  
}

int main(){
  int number;
  cin>>number;
  
  factorial(number,1);
  
  return 0;
}
