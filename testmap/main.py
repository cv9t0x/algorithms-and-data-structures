import sys
import time

def main():
  N = 5
  temp = dict()

  for i in range(0, N + 1):
    buf = 10**i

    start = time.perf_counter_ns()
    for j in range(buf):
      temp[j] = j;
    
    stop = time.perf_counter_ns()
    
    size = len(temp);
    memory = sys.getsizeof(temp);
    duration = stop - start;

    print(size, duration, memory);

    temp.clear()



if __name__ == '__main__':
  main()