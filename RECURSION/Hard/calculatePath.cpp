#include<iostream>
using namespace std;

int paths(int rowp,int colp, int row, int col){
  if(rowp >= row || colp>=col){
    return 0;
  }
  else if(rowp == row-1 && colp == col-1){
    return 1;
  }
  
  int path1 = paths(rowp+1,colp,row,col);
  int path2 = paths(rowp,colp+1,row,col);
  
  return path1+path2;
}

int main()
{
  int row,col;
  cin>>row;
  cin>>col;
  
  int path = paths(0,0,row,col);
  
  cout<<path;
  return 0;
}

  
