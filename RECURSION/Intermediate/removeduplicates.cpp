#include<iostream>
using namespace std;

void removedup(string str,int mapArray[],int index,string newstr){
    if(index == str.size()-1){
        cout<<newstr;
        return;
    }
    char cur_ele = str.at(index);
    int cur_ele_map = cur_ele - 'a';
    if(mapArray[cur_ele_map] == 0){
        newstr+=cur_ele;
        mapArray[cur_ele_map] = 1;
    }
    removedup(str,mapArray,index+1,newstr);
}
    
int main()
{
    string str;
    cin>>str;
    int mapArray[26] = {0};
    
    removedup(str,mapArray,0,"");
    
    return 0;
}
