#include<iostream>
using namespace std;

void reverse(string str, int index, string newstr){
  if(index == 0){
    newstr+=str.at(0);
    cout<<newstr;
    return;
  }
  
  newstr+=str.at(index);
  reverse(str,index-1,newstr);
}

int main()
{
  string str;
  cin>>str;
  
  int index=str.size()-1;  
  reverse(str,index,"");
  
  return 0;
}
