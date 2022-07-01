#include<iostream>
using namespace std;

void sendback(string str,int index,int count,string newstr,char back){
    if(index == str.size()){
        while(count--){
            newstr+=back;
        }
        cout<<newstr;
        return;
    }
    if(str.at(index) == back){
        count++;
    }
    else{
        newstr+=str.at(index);
    }
    
    sendback(str,index+1,count,newstr,back);
}
    
int main()
{
    string str;
    cin>>str;
    char back;
    cin>>back;
    
    sendback(str,0,0,"",back);
    
    return 0;
}
