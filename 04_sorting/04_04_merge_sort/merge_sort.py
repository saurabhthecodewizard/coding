def merge(arr: list, low: int, mid: int, high: int):
    left = low
    right = mid+1
    aux = []
    
    while left <= mid and right <= high:
        if arr[left] <= arr[right]:
            aux.append(arr[left])
            left += 1
        else:
            aux.append(arr[right])
            right += 1
    
    while left <= mid:
        aux.append(arr[left])
        left += 1
        
    while right <= high:
        aux.append(arr[right])
        right += 1
        
    for i in range(low, high + 1):
        arr[i] = aux[i-low]
        

def mergeSort(arr: list, low: int, high: int):
    if low < high:
        mid = (low + high) // 2
        mergeSort(arr, low, mid)
        mergeSort(arr, mid + 1, high)
        merge(arr, low, mid, high)
    

elements = [3, 2, 8, 5, 1, 4, 23]
print("Before:-")
print(elements)
mergeSort(elements, 0, len(elements) - 1)
print("After:-")
print(elements)