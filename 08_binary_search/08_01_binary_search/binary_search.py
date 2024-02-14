def search(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1

def print_array(arr):
    print("Array:", arr)

# Test Case 1: Target found in the middle
arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
target1 = 5
print("Test Case 1:")
print_array(arr1)
print("Index of", target1, ":", search(arr1, target1))  # Output should be 4

# Test Case 2: Target found at the beginning
arr2 = [10, 20, 30, 40, 50]
target2 = 10
print("\nTest Case 2:")
print_array(arr2)
print("Index of", target2, ":", search(arr2, target2))  # Output should be 0

# Test Case 3: Target found at the end
arr3 = [100, 200, 300, 400, 500]
target3 = 500
print("\nTest Case 3:")
print_array(arr3)
print("Index of", target3, ":", search(arr3, target3))  # Output should be 4

# Test Case 4: Target not found
arr4 = [5, 10, 15, 20, 25]
target4 = 12
print("\nTest Case 4:")
print_array(arr4)
print("Index of", target4, ":", search(arr4, target4))  # Output should be -1
