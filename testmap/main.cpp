#include <iostream>
#include <map>
#include <cmath>
#include <chrono>

int main()
{
  const int N = 8;
  std::map<int, int> temp;

  for (int i = 0; i <= N; i++)
  {
    auto start = std::chrono::high_resolution_clock::now();

    for (int j = 0; j < pow(10, i); j++)
    {
      temp.insert({j, j});
    }

    auto stop = std::chrono::high_resolution_clock::now();

    const int memory = temp.size() * sizeof(std::map<int, int>::value_type) + sizeof(std::map<int, int>::pointer);
    const long time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

    std::cout << temp.size() << ' ' << time << ' ' << memory << std::endl;

    temp.clear();
  }

  return 0;
}