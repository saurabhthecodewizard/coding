def search_range(nums, target):
    result = [-1, -1]
    low, high = 0, len(nums) - 1

    # Search for the first occurrence of the target
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] >= target:
            high = mid - 1
        else:
            low = mid + 1

        if target == nums[mid]:
            result[0] = mid

    low, high = 0, len(nums) - 1

    # Search for the last occurrence of the target
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] <= target:
            low = mid + 1
        else:
            high = mid - 1

        if target == nums[mid]:
            result[1] = mid

    return result

# Test cases
nums1 = [5, 7, 7, 8, 8, 10]
target1 = 8
print(f"Test Case 1 - Array: {nums1}")
print(f"Target: {target1}")
print(f"Result: {search_range(nums1, target1)}")

nums2 = [5, 7, 7, 8, 8, 10]
target2 = 6
print(f"\nTest Case 2 - Array: {nums2}")
print(f"Target: {target2}")
print(f"Result: {search_range(nums2, target2)}")

nums3 = [1]
target3 = 1
print(f"\nTest Case 3 - Array: {nums3}")
print(f"Target: {target3}")
print(f"Result: {search_range(nums3, target3)}")

nums4 = [2, 2]
target4 = 2
print(f"\nTest Case 4 - Array: {nums4}")
print(f"Target: {target4}")
print(f"Result: {search_range(nums4, target4)}")
