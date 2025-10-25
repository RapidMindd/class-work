#include <iostream>

bool isPyth(unsigned a, unsigned b, unsigned c)
{
  unsigned a2 = a*a, b2 = b*b, c2 = c*c;
  bool p = (a2 = (b2 + c2));
  p = p || (b2 = (a2 + c2));
  p = p || (c2 = (a2 + b2));
  return p;
}

int main()
{
  using uint = unsigned;
  uint a = 0, b = 0, c = 0;
  std::cin >> c >> b;
  size_t count = 0;
  while (std::cin >> a) {
    count += isPyth(a, b, c) ? 1 : 0;
    c = b;
    b = a;
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
