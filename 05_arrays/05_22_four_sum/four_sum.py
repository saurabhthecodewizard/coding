def four_sum(nums: list, target: int):
    result = []
    size = len(nums)
    if size < 4:
        return result
    nums.sort()
    for i in range(size - 3):
        if i > 0 and nums[i] == nums[i - 1]:
            continue
        for j in range(i + 1, size - 2):
            if j > i + 1 and nums[j] == nums[j - 1]:
                continue
            low = j + 1
            high = size - 1
            while low < high:
                sumation = nums[i] + nums[j] + nums[low] + nums[high]
                if sumation < target:
                    low += 1
                elif sumation > target:
                    high -= 1
                else:
                    result.append([nums[i], nums[j], nums[low], nums[high]])
                    while low + 1 < high and nums[low] == nums[low + 1]:
                        low += 1
                    while high - 1 > low and nums[high] == nums[high - 1]:
                        high -= 1
                    low += 1
                    high -= 1
    return result


# Example 1
nums1 = [1, 0, -1, 0, -2, 2]
target1 = 0
result1 = four_sum(nums1, target1)
print("Example 1:")
print(result1)

# Example 2
nums2 = [2, 2, 2, 2, 2]
target2 = 8
result2 = four_sum(nums2, target2)
print("\nExample 2:")
print(result2)