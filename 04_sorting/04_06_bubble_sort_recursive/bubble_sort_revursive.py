def bubbleSort(arr: list, n: int):
    if n == 1:
        return
    for i in range(n - 1):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
    
    bubbleSort(arr, n-1)
                
elements = [13, 46, 24, 52, 20, 9]
print("Before:-")
print(elements)
bubbleSort(elements, len(elements))
print("After:-")
print(elements)