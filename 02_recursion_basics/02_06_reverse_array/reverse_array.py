def reverseArray(start, end, arr):
    if start < end:
        arr[start], arr[end] = arr[end], arr[start]
        reverseArray(start + 1, end - 1, arr)
        
items = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print("Before:-")
print(items)
reverseArray(0, len(items) - 1, items)
print("After:-")
print(items)