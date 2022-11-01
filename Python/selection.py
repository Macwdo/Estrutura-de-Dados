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
