def search(nums, target):
    low, high = 0, len(nums) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] == target:
            return mid
        elif nums[low] <= nums[mid]:
            if nums[low] <= target <= nums[mid]:
                high = mid - 1
            else:
                low = mid + 1
        else:
            if nums[mid] <= target <= nums[high]:
                low = mid + 1
            else:
                high = mid - 1
    return -1

# Test cases
nums1 = [4, 5, 6, 7, 0, 1, 2]
target1 = 0
print(f"Test Case 1 - Array: {nums1}")
print(f"Target: {target1}")
print(f"Index: {search(nums1, target1)}")

nums2 = [4, 5, 6, 7, 0, 1, 2]
target2 = 3
print(f"\nTest Case 2 - Array: {nums2}")
print(f"Target: {target2}")
print(f"Index: {search(nums2, target2)}")

nums3 = [1]
target3 = 0
print(f"\nTest Case 3 - Array: {nums3}")
print(f"Target: {target3}")
print(f"Index: {search(nums3, target3)}")

nums4 = [4, 5, 6, 7, 8, 1, 2, 3]
target4 = 8
print(f"\nTest Case 4 - Array: {nums4}")
print(f"Target: {target4}")
print(f"Index: {search(nums4, target4)}")
