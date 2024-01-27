#include <iostream>    
  
int main() {
  int bin= 0;   
  int dec = 0;
  int temp = 0;
  std::cout << "Please enter a binary number :" << std::endl;
  std::cin >> bin ;
  int weight = 1;
  while (bin != 0) {
    temp = bin % 10;
    dec += temp * weight;
    weight = weight * 2;
    bin = bin / 10;
  }
  std::cout << dec << std::endl;
  return 0;
}
