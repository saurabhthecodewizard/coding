def insertionSort(arr: list):
    for i in range(len(arr)):
        for j in range(i, 0, -1):
            if arr[j] < arr[j-1]:
                arr[j], arr[j-1] = arr[j-1], arr[j]
                
                
elements = [13, 46, 24, 52, 20, 9]
print("Before:-")
print(elements)
insertionSort(elements)
print("After:-")
print(elements)