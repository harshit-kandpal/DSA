#include<iostream>
using namespace std;

int xn(int x,int n){
  if(n==0){
      return 1;
    }
  else if(n==1){
      return x;
  }    
   int sum = xn(x,n-1)*x;   
   return sum;
}

//logn height of stack
int xnlog(int x,int n){
  if(n==0){
      return 1;
    }
  else if(n==1){
      return x;
  }  
  
  if(n%2 == 0){
    int sum=(
}
int main(){
  int x,n;
  cin>>x>>n;
  
  //height n
  int sum = xn(x,n);
  cout<<sum;
  
  //height log n
  int logSum = xnlog(x,n)
  cout<<logSum; 
  
  return 0;
  
}
