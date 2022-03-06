#include <iostream>
#include <fstream>
#include <cmath>

int main(int argc, const char *argv[])
{
  if (argc != 2)
  {
    std::cout << "Wrong arguments" << std::endl;
    return -1;
  }

  std::ifstream in(argv[1]);

  if (in.is_open())
  {
    while (!in.fail())
    {
      double x, y, z;
      in >> x >> y >> z;

      std::cout << 2 * sin(x) * sin(y) + cos(z) << std::endl;
    }
  }
  else
  {
    std::cout << "Can't open the file" << std::endl;
  }

  return 0;
}