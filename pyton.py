stack = []; stack.append(1); stack.pop()

# Связный список (реализация)
class Node:
    def __init__(self, data): self.data = data; self.next = None

# Массив (через list)
arr = [1, 2, 3]; arr[0] = 5

# Массив (через array)
import array; arr = array.array('i', [1, 2, 3])