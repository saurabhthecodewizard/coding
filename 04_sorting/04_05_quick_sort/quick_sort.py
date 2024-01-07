def partition(arr: list, low: int, high: int):
    i = low + 1
    j = high
    
    while True:
        while arr[i] < arr[low]:
            i += 1
            if i >= high:
                break
        
        while arr[j] > arr[low]:
            j -= 1
            if j <= low:
                break
            
        if i >= j:
            break
        
        arr[i], arr[j] = arr[j], arr[i]
        
    arr[low], arr[j] = arr[j], arr[low]
    
    return j

def quickSort(arr: list, low: int, high: int):
    if low >= high:
        return
    
    j = partition(arr, low, high)
    quickSort(arr, low, j - 1)
    quickSort(arr, j + 1, high)
    

elements = [3, 2, 8, 5, 1, 4, 23]
print("Before:-")
print(elements)
quickSort(elements, 0, len(elements) - 1)
print("After:-")
print(elements)