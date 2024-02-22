def find_floor(arr, target):
    low = 0
    high = len(arr) - 1
    result = -1
    while low <= high:
        mid = low + (high - low) // 2
        if arr[mid] <= target:
            result = arr[mid]
            low = mid + 1
        else:
            high = mid - 1
    return result

def find_ceil(arr, target):
    low = 0
    high = len(arr) - 1
    result = -1
    while low <= high:
        mid = low + (high - low) // 2
        if arr[mid] >= target:
            result = arr[mid]
            high = mid - 1
        else:
            low = mid + 1
    return result

# Test cases
arr1 = [1, 2, 8, 10, 10, 12, 19]
target1 = 5
print("Test Case 1 - Array:", arr1)
print("Floor of", target1, ":", find_floor(arr1, target1))
print("Ceil of", target1, ":", find_ceil(arr1, target1))

arr2 = [1, 2, 8, 10, 10, 12, 19]
target2 = 20
print("\nTest Case 2 - Array:", arr2)
print("Floor of", target2, ":", find_floor(arr2, target2))
print("Ceil of", target2, ":", find_ceil(arr2, target2))

arr3 = [1, 2, 8, 10, 10, 12, 19]
target3 = 0
print("\nTest Case 3 - Array:", arr3)
print("Floor of", target3, ":", find_floor(arr3, target3))
print("Ceil of", target3, ":", find_ceil(arr3, target3))

arr4 = [1, 2, 8, 10, 10, 12, 19]
target4 = 10
print("\nTest Case 4 - Array:", arr4)
print("Floor of", target4, ":", find_floor(arr4, target4))
print("Ceil of", target4, ":", find_ceil(arr4, target4))
