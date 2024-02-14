def search_insert(nums, target):
    low = 0
    high = len(nums) - 1
    result = len(nums)
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] >= target:
            result = mid
            high = mid - 1
        else:
            low = mid + 1
    return result

def print_array(arr):
    print("Array:", arr)

# Test Case 1: Target found in the middle
arr1 = [1, 3, 5, 6]
target1 = 5
print("Test Case 1:")
print_array(arr1)
print("Insert Position for", target1, ":", search_insert(arr1, target1))  # Output should be 2

# Test Case 2: Target found at the beginning
arr2 = [1, 3, 5, 6]
target2 = 2
print("\nTest Case 2:")
print_array(arr2)
print("Insert Position for", target2, ":", search_insert(arr2, target2))  # Output should be 1

# Test Case 3: Target found at the end
arr3 = [1, 3, 5, 6]
target3 = 7
print("\nTest Case 3:")
print_array(arr3)
print("Insert Position for", target3, ":", search_insert(arr3, target3))  # Output should be 4

# Test Case 4: Target not found
arr4 = [1, 3, 5, 6]
target4 = 0
print("\nTest Case 4:")
print_array(arr4)
print("Insert Position for", target4, ":", search_insert(arr4, target4))  # Output should be 0
