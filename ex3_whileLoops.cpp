//this code should actually utilize a for loop instead since we know we want numbers 0-9
#include <iostream>

int main() {
  
  int i = 0;
  

  while (i < 10) {
    std::cout << i << " " << i * i << "\n";

    i++;
  }
}
