def selection_sort(arr: list):
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[i]:
                arr[i], arr[j] = arr[j], arr[i]
                
elements = [13, 46, 24, 52, 20, 9]
print("Before:-")
print(elements)
selection_sort(elements)
print("After:-")
print(elements)