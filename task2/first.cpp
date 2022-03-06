#include <iostream>
#include <fstream>
#include <time.h>
#define M_PI 3.14159265358979323846

int main(int argc, const char *argv[])
{
  if (argc != 3)
  {
    std::cout << "Wrong arguments" << std::endl;
    return -1;
  }

  std::srand(time(NULL));

  int N = std::stoi(argv[1]);
  std::ofstream out(argv[2]);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      out << rand() * (M_PI + M_PI) / RAND_MAX - M_PI << " ";
    }
    out << '\n';
  }

  out.close();

  return 0;
}