#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: ";
  srand(time(NULL));
  int answer = std::rand() % 20;

  if(answer == 0) {
    std::cout << "It is absolute.";
  }
  else if(answer == 1) {
    std::cout << "It is certain.";
  }
  else if(answer == 2) {
    std::cout << "It is very certain.";
  }
  else if(answer == 3) {
    std::cout << "It is somewhat certain.";
  }
  else if(answer == 4) {
    std::cout << "It is not-so certain.";
  }
  else if(answer == 5) {
    std::cout << "It is very sure.";
  }
  else if(answer == 6) {
    std::cout << "It is sure.";
  }
  else if(answer == 7) {
    std::cout << "It is unsure.";
  }
  else if(answer == 8) {
    std::cout << "It is very unsure.";
  }
  else if(answer == 9) {
    std::cout << "It could be.";
  }
  else if(answer == 10) {
    std::cout << "You never know.";
  }
  else if(answer == 11) {
    std::cout << "Yes, 100%.";
  }
  else if(answer == 12) {
    std::cout << "Sorry, No.";
  }
  else if(answer == 13) {
    std::cout << "Maybe?";
  }
  else if(answer == 14) {
    std::cout << "Maybe, yes?";
  }
  else if(answer == 15) {
    std::cout << "Maybe, no?";
  }
  else if(answer == 16) {
    std::cout << "It doubts it.";
  }
  else if(answer == 17) {
    std::cout << "Very unlikely.";
  }
  else if(answer == 18) {
    std::cout << "Very likely.";
  }
  else if(answer == 19) {
    std::cout << "Doubtful.";
  }
  else if(answer == 20) {
    std::cout << "Very doubtful.";
  }

  return 0;
}