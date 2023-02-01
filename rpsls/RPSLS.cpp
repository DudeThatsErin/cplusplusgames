#include <iostream>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "===========================================\n";
  std::cout << "   Rock, Paper, Scissors, Lizard, Spock!\n";
  std::cout << "===========================================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cout << "shoot: ";
  std::cin >> user;

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cout << "computer: " << computer << "\n\n";

  if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == scissors && computer == paper) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == rock) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == rock) {
    std::cout << "You Win!\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == computer) {
    std::cout << "Tie!\n";
  } else {
    std::cout << "You Lose!\n";

  }

  return 0;
}