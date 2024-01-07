def insertionSortRecursive(arr: list, n: int):
    if len(arr) <= n:
        return
    for j in range(n, 0, -1):
        if arr[j] < arr[j-1]:
            arr[j], arr[j-1] = arr[j-1], arr[j]
            
    insertionSortRecursive(arr, n + 1)
                
                
elements = [13, 46, 24, 52, 20, 9]
print("Before:-")
print(elements)
insertionSortRecursive(elements, 0)
print("After:-")
print(elements)