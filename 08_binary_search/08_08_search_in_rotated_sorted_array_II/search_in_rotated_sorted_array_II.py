def search(nums, target):
    low, high = 0, len(nums) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] == target:
            return True
        if nums[low] == nums[mid] and nums[mid] == nums[high]:
            low += 1
            high -= 1
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
    return False

# Test cases
nums1 = [2, 5, 6, 0, 0, 1, 2]
target1 = 0
print(f"Test Case 1 - Array: {nums1}")
print(f"Target: {target1}")
print(f"Result: {search(nums1, target1)}")

nums2 = [2, 5, 6, 0, 0, 1, 2]
target2 = 3
print(f"\nTest Case 2 - Array: {nums2}")
print(f"Target: {target2}")
print(f"Result: {search(nums2, target2)}")

nums3 = [1, 1, 1, 3, 1]
target3 = 3
print(f"\nTest Case 3 - Array: {nums3}")
print(f"Target: {target3}")
print(f"Result: {search(nums3, target3)}")

nums4 = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1]
target4 = 0
print(f"\nTest Case 4 - Array: {nums4}")
print(f"Target: {target4}")
print(f"Result: {search(nums4, target4)}")
