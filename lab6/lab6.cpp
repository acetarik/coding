#include<chrono>
#include <bits/stdc++.h>
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
      auto start = chrono::high_resolution_clock::now();
          ios_base::sync_with_stdio(false);

  for(int i=0;i<100000;i++){
    for(int j=i;j<100000;j++){
      temp=data[i];
      if (data[i]>data[j]){
        data[i]=data[j];
        data[j]=temp;
      }
    }
  }
      auto end = chrono::high_resolution_clock::now();
      double time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
}
