#include <iostream>
int main() {
  int coordinate1{0};
  int coordinate2{0};
  std::string instruction{};
  std::cin >> instruction;
  
  for(char letter : instruction) {
    if(letter == 's') {
    coordinate2++;
    } else {
      if(letter == 'n') {
      coordinate2--;
      } else {
        if(letter == 'e') {
        coordinate1++;
        } else {
          if(letter == 'w') {
          coordinate1--;
          } else {
            }
          }
        }
      }
    }
std::cout << "(" << coordinate1 << ", " << coordinate2 << ")" << std::endl;

  return 0;
}