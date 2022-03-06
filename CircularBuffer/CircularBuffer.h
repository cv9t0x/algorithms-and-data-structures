#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

#include <istream>

class CircularBufferException
{
};

class CircularBuffer
{
private:
  int count = 0;
  int size;
  int head;
  int tail;
  int* buffer;

  friend std::ostream& operator<<(std::ostream& out, const CircularBuffer& circularBuffer);

public:
  CircularBuffer();
  CircularBuffer(const int size);

  void add(const int data);
  int read();

  bool isFull();
  bool isEmpty();

  ~CircularBuffer();
};


#endif // !CIRCULARBUFFER_H