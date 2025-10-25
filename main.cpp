#include <iostream>

int main()
{
  using uint = unsigned;
  uint a = 0;
  std::cin >> a;
  
  if (std::cin.eof()) {
    std::cout << "0";
    std::cout << "\n";
  }
  else if (std::cin.fail()) {
    std::cout << "Error\n";
    return 1;
  }
}
