#include<iostream>
using namespace std;

long long calls(int guests){
  if(guests <= 1){
    return 1;
  }
  
  long long way1 = calls(guests-1);
 
  long long way2 = (guests-1) * calls(guests-2);
  
  
  return way1+way2;  
}

int main()
{
  int guests;
  cin>>guests;
  
  long long path = calls(guests);
  
  cout<<path;
  return 0;
}
