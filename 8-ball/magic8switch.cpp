#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: ";
  srand(time(NULL));
  int answer = std::rand() % 20;

  switch(answer) {
    case 0:
      std::cout << "It is absolute.";
      break;
    case 1:
      std::cout << "It is certain.";
      break;
    case 2:
      std::cout << "It is very certain.";
      break;
    case 3:
      std::cout << "It is somewhat certain.";
      break;
    case 4:
      std::cout << "It is not-so certain.";
      break;
    case 5:
      std::cout << "It is very sure.";
      break;
    case 6:
      std::cout << "It is sure.";
      break;
    case 7:
      std::cout << "It is unsure.";
      break;
    case 8:
      std::cout << "It is very unsure.";
      break;
    case 9:
      std::cout << "It could be.";
      break;
    case 10:
      std::cout << "You never know.";
      break;
    case 11:
      std::cout << "Yes, 100%.";
      break;
    case 12:
      std::cout << "Sorry, No.";
      break;
    case 13:
      std::cout << "Maybe?";
      break;
    case 14:
      std::cout << "Maybe, yes?";
      break;
    case 15:
      std::cout << "Maybe, no?";
      break;
    case 16:
      std::cout << "It doubts it.";
      break;
    case 17:
      std::cout << "Very unlikely.";
      break;
    case 18:
      std::cout << "Very likely.";
      break;
    case 19:
      std::cout << "Doubtful.";
      break;
    case 20:
      std::cout << "Very doubtful.";
      break;
    default:
      std::cout << "No way.";
      break;
  }

  return 0;
}