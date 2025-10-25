#include <iostream>

int main()
{
  using uint = unsigned;
  uint a = 0;
  size_t sum_squares = 0;
  while (std::cin >> a) {
    sum_squares += a * a;
  }
  if (std::cin.eof()) {
    std::cout << sum_squares;
    std::cout << "\n";
  }
  else if (std::cin.fail()) {
    std::cout << "Error\n";
    return 1;
  }
}
