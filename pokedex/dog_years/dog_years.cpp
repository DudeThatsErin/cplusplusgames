#include <iostream>

int main() {

  std::string name;
  int age;

  std::cout << "What is your dog's name and how old is your dog? Write each on their own line please.";
  std::cin >> name >> age;

  // First two years of a dogs life count as 21 human years.
  int early_years = 21;
  // Each following year counts as 4 human years.
  int later_years = (age - 2) * 4;
  int human_years = early_years + later_years;

  if(age <= 2) {
    std::cout << "My name is " << name << "! Ruff ruff, I am 21 years old or younger!";
    return 0;
  } else if(age > 2) {
  std::cout << "My name is " << name << "! Ruff ruff, I am " << human_years << " years old in human years.";
  return 0;
  }
  return 0;
}