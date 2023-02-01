#include <iostream>

// uses conversion rates on the date this was pushed.
int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // current conversion rates
  // pesos to USD 0.053
  // reais to USD 0.20
  // soles to USD 0.26
  dollars = (0.053 * pesos) + (0.20 * reais) + (0.26 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
}