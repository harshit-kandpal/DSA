#include<iostream>
using namespace std;

void LastAndFirst(int index,string str, int first,int last,char find){
    if(index == 0){
         if(first == -1 && last == -1){
            cout<<"Not in the string"<<endl;
        }
        else if(first >=0 && last == -1){
            cout<<"first ocuurence of "<<find<<" is "<<first<<" and no more occurance"<<endl;
        }
       else{
            cout<<"first ocuurence of "<<find<<" is "<<first<<" and last is "<<last<<endl;
        }
        
        return;
    }
    if(find == str.at(index)){
        if(last<0){
            last = index;
        }
        else{
            first = index;
        }
    }
        
    LastAndFirst(index-1,str,first,last,find);
}
    
int main()
{
    string str;
    cin>>str;
    char find;
    cin>>find;
    
    LastAndFirst(str.size()-1,str,-1,-1,find);
    
    return 0;
}
    
