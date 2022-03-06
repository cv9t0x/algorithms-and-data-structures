import matplotlib.pyplot as plt

def readData(path):
  size, time, memory = [], [], []

  with open(path) as file:
    for line in file:
      data = line.split()
      size.append(int(data[0]))
      time.append(int(data[1]))
      memory.append(int(data[2]))
    
  return size, time, memory

def createGraphic(id, title, legend, xLabel, yLabel, xData1, yData1, xData2, yData2):
  plt.subplot(id)
  plt.title(title)
  plt.xlabel(xLabel)
  plt.ylabel(yLabel)
  plt.plot(xData1, yData1)
  plt.plot(xData2, yData2)
  plt.legend(legend)

def main():
  mapData = readData('./map.txt')
  dictData = readData('./dict.txt')

  createGraphic(121, 'Time', ['c++', 'python'], "N", "Time to fill", mapData[0], mapData[1], dictData[0], dictData[1])
  createGraphic(122, 'Memory', ['c++', 'python'], "N", "Memory to fill", mapData[0], mapData[2], dictData[0], dictData[2])

  plt.show()

if __name__ == "__main__":
  main()