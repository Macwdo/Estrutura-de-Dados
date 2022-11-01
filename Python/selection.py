def sort_selection(array):
  for j in range(len(array)):
    for i in range(len(array)):
      if len(array) - 1 == i:
        next_step = array[i]
        next_aux = array[i]
      else:
        next_step = array[i+1]
        next_aux = array[i+1]
  
      if next_step < array[i]:
        aux_arr = array[i]
        array[i] = next_aux
        array[i+1] = aux_arr
    print(array)
  return array

def sort_livro(data):
    for scanIndex in range(0, len(data)):
        minIndex = scanIndex

        for compIndex in range(scanIndex + 1,len(data)):
            if data[compIndex] < data[minIndex]:
                minIndex = compIndex
            if minIndex != scanIndex:
                data[scanIndex],data[minIndex] = data[minIndex],data[scanIndex]
            print(data)

data = [1,321,421,412,41,41,5,1,25,4,23,6,32,46,246,23,6,23,6,23,6,12,7,43,2,74,43,27]

def sortList(array):
    length = len(array)
    for item in range(length):
        minimum = item
        for i in range(item + 1, length):
            if array[i] < array[minimum]:
                minimum = i

        (array[item], array[minimum]) = (array[minimum], array[item])
        print(array)

sortList(data)
