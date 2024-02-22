def find_min(nums):
    low, high = 0, len(nums) - 1
    result = float('inf')
    while low <= high:
        mid = low + (high - low) // 2
        if nums[low] <= nums[mid]:
            result = min(result, nums[low])
            low = mid + 1
        else:
            result = min(result, nums[mid])
            high = mid - 1
    return result

# Test cases
nums1 = [3, 4, 5, 1, 2]
print(f"Test Case 1 - Array: {nums1}")
print(f"Minimum Element: {find_min(nums1)}")

nums2 = [4, 5, 6, 7, 0, 1, 2]
print(f"\nTest Case 2 - Array: {nums2}")
print(f"Minimum Element: {find_min(nums2)}")

nums3 = [11, 13, 15, 17]
print(f"\nTest Case 3 - Array: {nums3}")
print(f"Minimum Element: {find_min(nums3)}")

nums4 = [5, 5, 5, 5, 5]
print(f"\nTest Case 4 - Array: {nums4}")
print(f"Minimum Element: {find_min(nums4)}")
