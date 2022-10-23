#include<vector>
// C++ program to generate random numbers
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main(){
  std::vector <int> data;
  srand(time(0));
  for (int i=0;i<100000;i++){
    data.push_back((rand()%100)+1);
  }
  int temp;
  for(int i=0;i<100000;i++){
    for(int j=i;j<100000;j++){
      temp=data[i];
      if (data[i]>data[j]){
        data[i]=data[j];
        data[j]=temp;
      }
    }
  }
}
