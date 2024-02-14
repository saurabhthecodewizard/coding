def lower_bound(arr, target):
    low = 0
    high = len(arr) - 1
    result = high
    while low <= high:
        mid = low + (high - low) // 2
        if arr[mid] >= target:
            result = mid
            high = mid - 1
        else:
            low = mid + 1
    return result

def print_array(arr):
    print("Array:", arr)

# Test Case 1: Target found in the middle
arr1 = [1, 2, 2, 2, 3, 4, 5]
target1 = 2
print("Test Case 1:")
print_array(arr1)
print("Lower Bound of", target1, ":", lower_bound(arr1, target1))  # Output should be 1

# Test Case 2: Target found at the beginning
arr2 = [5, 10, 10, 15, 20]
target2 = 5
print("\nTest Case 2:")
print_array(arr2)
print("Lower Bound of", target2, ":", lower_bound(arr2, target2))  # Output should be 0

# Test Case 3: Target found at the end
arr3 = [10, 20, 30, 40, 50]
target3 = 50
print("\nTest Case 3:")
print_array(arr3)
print("Lower Bound of", target3, ":", lower_bound(arr3, target3))  # Output should be 4

# Test Case 4: Target not found
arr4 = [5, 10, 15, 20, 25]
target4 = 12
print("\nTest Case 4:")
print_array(arr4)
print("Lower Bound of", target4, ":", lower_bound(arr4, target4))  # Output should be 3
