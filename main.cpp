#include <iostream>

int main()
{
  using uint = unsigned;
  uint a = 0;
  size_t count = 0;
  while (std::cin >> a) {
    count ++;
  }
  if (std::cin.eof()) {
    std::cout << count;
    std::cout << "\n";
  }
  else if (std::cin.fail()) {
    std::cout << "Error\n";
    return 1;
  }
}
