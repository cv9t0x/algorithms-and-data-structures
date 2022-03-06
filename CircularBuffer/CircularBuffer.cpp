#include "CircularBuffer.h"

CircularBuffer::CircularBuffer()
{
  size = 5;
  buffer = new int[this->size];
  head = 0;
  tail = 0;
};

CircularBuffer::CircularBuffer(const int size) : CircularBuffer()
{
  this->size = size;
};

CircularBuffer::~CircularBuffer()
{
  delete[] buffer;
};

void CircularBuffer::add(const int data)
{
  if (isFull())
  {
    if (tail == head)
    {
      tail = tail + 1 == size ? 0 : tail + 1;
    }
  }
  else
  {
    count += 1;
  }

  buffer[head] = data;
  head = head + 1 == size ? 0 : head + 1;
}

int CircularBuffer::read()
{
  if (isEmpty())
  {
    throw new CircularBufferException();
  }

  int temp = buffer[tail];
  buffer[tail] = -842150451;
  tail = tail + 1 == size ? 0 : tail + 1;
  count -= 1;

  if (count == 0)
  {
    head = 0;
    tail = 0;
  }

  return temp;
}

bool CircularBuffer::isFull()
{
  return size == count ? 1 : 0;
}

bool CircularBuffer::isEmpty()
{
  return count == 0 ? 1 : 0;
}

std::ostream &operator<<(std::ostream &out, const CircularBuffer &circularBuffer)
{
  if (circularBuffer.count == 0)
  {
    out << "Buffer is empty";
  }
  else
  {
    out << "Size: " << circularBuffer.size << "\tCount: " << circularBuffer.count << std::endl;
    out << "Head: " << circularBuffer.head << "\tTail: " << circularBuffer.tail << std::endl;

    for (int i = 0; i < circularBuffer.size; i++)
    {
      if (circularBuffer.buffer[i] != -842150451)
      {
        out << circularBuffer.buffer[i] << " ";
      }
    }
  }

  out << std::endl;

  return out;
}