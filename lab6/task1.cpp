#include<iostream>
#include <ctime>
#include <cstdlib>
int asker(){
  int ask_count;
  std::cout<<"How many times do you want to roll the dice : ";
  std::cin>>ask_count;
  return ask_count;
}
int dice_roll(){
  return (rand()%6)+1;
}
int main(){
  std::srand(time(0));
  int times=asker();
  for (int i=0;i<times;i++){
    std::cout<<"The dice shows the number : "<<dice_roll()<<'\n';
  }
  return 0;
}
