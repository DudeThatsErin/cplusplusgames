#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int answer = std::rand() % 3;

  switch(answer) {
    case 1:
      std::cout << "Heads";
      break;
    case 2:
      std::cout << "Tails";
      break;
    default:
      std::cout << "Unsure, the coin flipped over a table, under a dog, and onto the roof of your house. We can't see it to determine if it is heads or tails.";
      break;
  }

  return 0;
}