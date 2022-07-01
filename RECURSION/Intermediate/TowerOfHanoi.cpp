#include<iostream>
using namespace std;

void TowerOfHanoi(int disk,string source,string helper,string destination){
    if(disk==1){
        cout<<"Transfering disk"<<disk<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    TowerOfHanoi(disk-1,source,destination,helper);
    cout<<"Transfering disk"<<disk<<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(disk-1,helper,source,destination);
}

int main()
{
    int disk;
    cin>>disk;
    
    TowerOfHanoi(disk,"source","helper","destination");
    return 0;
}
