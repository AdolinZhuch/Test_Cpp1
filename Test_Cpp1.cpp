#include <iostream>

unsigned int wast=0;

int main() {
  // BEGIN (write your solution here)
  std::cout << "Hello, World!"<< std::endl;
  std::cin >> wast;
    if(wast <=0 ) std::cout << "wast = 0"<< std::endl;
    else std::cout << "wast !=0"<< std::endl;
  // END
  return 0;
}
