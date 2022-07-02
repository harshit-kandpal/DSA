#include<iostream>
using namespace std;

void permutation(string str,string permu){
    if(str == ""){
        cout<<permu<<endl;
        return;
    }    
    for(int i=0,i<str.size(),i++){
        char current = str.at(i);
        string newstr = str.substr(0,i) + str.substr(i+1);
        
        permutation(newstr,permu+current);
    }  
}

int main()
{
  string str;
  cin>>str;
  
  permutation(str,"");  
  return 0;
}
  
