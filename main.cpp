#include <iostream>

int main() {
  
  int* int_pointer = nullptr;

  std::cout << "int_pointer: " << int_pointer << std::endl;

  float a = 8.0;

  int_pointer = &a;

  std::cout << "int_pointer: " << int_pointer << std::endl;

}