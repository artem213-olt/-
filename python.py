#Массив:
import array
arr = array.array('i', [10, 20, 30, 40, 50])
arr.append(60)
arr.append(70)

#Список:
my_list = [1, "два", 3.0, True, [5, 6]]
my_list.append("новый элемент")
my_list.insert(2, "вставка")  
my_list.remove("два") 

#Стек:
stack = []
stack.append("первый")
stack.append("второй")
stack.append("третий")