#include<iostream>
// namespace{
//   int bruh(-1);
// }
int summer(int num[],int size,int bruh){
  size++;

  bruh++;
  if (size==10){
    return num[size-1];
  }
return
  num[bruh]+
summer(num,size,bruh);//this return is responsible for returning the remaining shit


}
int main()
{int arr[10]={1,2,3,4,5,6,7,1,2,3};
  std::cout<<summer(arr,0,-1)<<'\n';
}
