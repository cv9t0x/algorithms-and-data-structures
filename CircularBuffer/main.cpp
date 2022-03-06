#include <iostream>
#include <string>
#include "CircularBuffer.h"

int main()
{
  CircularBuffer circularBuffer;

  circularBuffer.add(5);
  circularBuffer.add(7);
  circularBuffer.add(2);
  circularBuffer.add(12);
  circularBuffer.add(3);

  circularBuffer.read();
  circularBuffer.read();

  circularBuffer.add(7);

  circularBuffer.read();

  std::cout << circularBuffer;

  return 0;
}