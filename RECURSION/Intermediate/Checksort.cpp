#include<iostream>
using namespace std;

bool checkSort(int arr[],int index,int size){
    if(index == size-1){
        return true;
    }
    if(arr[index]<=arr[index+1]){
        return checkSort(arr,index+1,size);
    }
    else{
        return false;
        }  
}
    
int main()
{
    int size; 
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
   if(checkSort(arr,0,size)){
       cout<<"sorted";
   }
   else {
        cout<<"not sorted";
    }
    
    return 0;
}
