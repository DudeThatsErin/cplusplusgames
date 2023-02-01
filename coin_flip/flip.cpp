#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int answer = std::rand() % 3;

  if(answer == 1) {
    std::cout << "Heads";
  }
  else if (answer == 2) {
    std::cout << "Tails";
  } else if (answer != 1 || answer != 2) {
    std::cout << "Unsure, the coin flipped over a table, under a dog, and onto the roof of your house. We can't see it to determine if it is heads or tails.";
  }

  return 0;
}