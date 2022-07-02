#include<iostream>
using namespace std;

void sequence(int index,string str,string newstr){
  if(index == str.size()){
    cout<<newstr;
    return;
  }
  
  sequence(index+1,str,newstr+str.at(index));
  sequence(index+1,str,newstr);
  
}

int main()
{
  string str;
  cin>>str;
  
  sequence(0,str,"");
  
  return 0;
}
  
