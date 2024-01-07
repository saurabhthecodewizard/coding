def reverse(nums: list, low: int, high: int):
    i, j = low, high
    while i < j:
        nums[i], nums[j] = nums[j], nums[i]
        i += 1
        j -= 1

def rotate(nums: list, k: int):
    k = k % len(nums)
    if k < 0:
        k = k + len(nums)
    
    reverse(nums, 0, k - 1)
    reverse(nums, len(nums) - k, len(nums) - 1)
    reverse(nums, 0, len(nums) - 1)

elements = [1, 2, 3, 4, 5, 6, 7]
k = 3
print("Elements:-")
print(elements)

rotate(elements, k)

print(f"Rotated by {k}:-")
print(elements)