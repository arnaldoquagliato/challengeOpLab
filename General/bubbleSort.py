"""
Bubble Sort Algorithm:
Introduction:
    Basically when the element at array is bigger then your next one, 
    they will swap up yours positions and that will happen "n" times 
    depends the size of array. 

Steps:

1. First "for" it's necessary to tell us how many times will be incremented.
2. Second "for" it´s necessary with if condicional to swap the elements at array
3. The if statment got the responsability to do the swap between elements.
4. First it was necessary create a auxiliary variable "aux" to store the smaller element,
   then that position will receive the bigger element and to finish, 
   the old index of the bigger one will store the "aux" with value
   the smaller element. 
"""

array = [4532,6,12341,10,2,90,4,5,70,1]


for i in range(len(array)):
    for j in range(len(array)):
        if array[j] != array[len(array)-1] and array[j]>array[j+1]:
            aux = array[j+1]
            array[j+1] = array[j]
            array[j] = aux

print(array)

        

