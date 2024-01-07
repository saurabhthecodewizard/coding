def bubbleSort(arr: list):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                
elements = [13, 46, 24, 52, 20, 9]
print("Before:-")
print(elements)
bubbleSort(elements)
print("After:-")
print(elements)