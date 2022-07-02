#include<iostream>
using namespace std;

int tiles(int row, int col){
  if(row == 0){
    return 1;
  }
  
  int way1,way2;
  way1 = tiles(row-1,col)
  if(row-col>=0){
      way2 = tiles(row-col,col);
  }
  
  return way1+way2;  
}

int main()
{
  int row,col;
  cin>>row;
  cin>>col;
  
  int path = tiles(row,col);
  
  cout<<path;
  return 0;
}
